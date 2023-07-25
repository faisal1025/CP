#include<bits/stdc++.h>
#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

class Solution{
public:
	void solve(){

		// Write your code here
		int t;
		cin>>t;

		while(t--){
			int n, m;
			cin>>n>>m;
			vvi board(n, vector<int> (m));
			for(int i = 0; i < n; i++){
				for(int j = 0; j < m; j++){
					cin>>board[i][j];
				}
			}
			int mx = INT_MIN;
			for(int x = 0; x < n; x++){
				for(int y = 0; y < m; y++){
					int sum = board[x][y];
					int i = x, j = y;
					while(i+1 < n and j+1 < m){
						sum += board[i+1][j+1];
						i += 1;
						j += 1;
					}
					i = x; j = y;
					while(i-1 >= 0 and j+1 < m){
						sum += board[i-1][j+1];
						i -= 1;
						j += 1;
					}
					i = x; j = y;
					while(i-1 >= 0 and j-1 >= 0){
						sum += board[i-1][j-1];
						i -= 1;
						j -= 1;
					}
					i = x; j = y;
					while(i+1 < n and j-1 >= 0){
						sum += board[i+1][j-1];
						i += 1;
						j -= 1;
					}
					mx = max(mx, sum);
				}
			}
			cout<<mx<<endl;
		}
	}	
};

int main(){
	
	// for fast io
	FAST_IO

	Solution obj;
	obj.solve();
	

	return 0;
}
