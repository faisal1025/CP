#include<bits/stdc++.h>
#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

class Solution{
private:
	bool issorted(vector<int> & arr){
		for(int i = 1; i < arr.size(); i++){
			if(arr[i-1] > arr[i]){
				return false;
			}
		}
		return true;
	}

public:
	void solve(){

		// Write your code here
		int t;
		cin>>t;

		while(t--){
			int n, m;
			cin>>n>>m;

			vvi grid(n, vector<int> (m));

			for(int i = 0; i < n; i++){
				for(int j = 0; j < m; j++){
					cin>>grid[i][j];
				}
			}

			int possible = 1;
			vector<int> defected;
			for(int i = 0; i < n; i++){
				if(!issorted(grid[i])){
					possible = 0;
					vector<int> arr = grid[i];
					sort(arr.begin(), arr.end());
					for(int j = 0; j < m; j++){
						if(grid[i][j] != arr[j])
							defected.push_back(j);
					}
					break;
				}
			}
			if(possible){
				cout<<1<<" "<<1<<"\n";
				continue;
			}

			if(defected.size() > 2){
				cout<<-1<<"\n";
				continue;
			}

			int col1 = defected[0];
			int col2 = defected[1];

			possible = 1;
			for(int i = 0; i < n; i++){
				swap(grid[i][col1], grid[i][col2]);
				if(!issorted(grid[i])){
					possible = 0;
					break;
				}
			}
			if(possible) cout<<col1+1<<" "<<col2+1<<"\n";
			else cout<<-1<<"\n";
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
