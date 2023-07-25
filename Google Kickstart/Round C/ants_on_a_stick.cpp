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

		for(int test = 1; test <= t; test++){
			cout<<"Case #"<<test<<": ";
			int n, l;
			cin>>n>>l;

			vector<int> pos(n+1);
			vector<int> dir(n+1);
			for(int i = 1; i <= n; i++){
				cin>>pos[i]>>dir[i];
			}

			vvi ants(n+1, vector<int>());
			vvi time(n+1, vector<int>());

			for(int i = 1; i <= n; i++){
				ants[i] = {pos[i], i};
				if(dir[i] == 0){
					time[i] = {pos[i], i};
				}else{
					time[i] = {l-pos[i], i};
				}
			}

			sort(ants.begin()+1, ants.end());
			sort(time.begin()+1, time.end());
			vector<int> antsOrder;
			int i = 1, j = n;
			for(int ant = 1; ant <= n; ant++){
				vector<int> ind;
				int m = ant+1;
				while(m <= n and time[ant][0] == time[m][0]){
					m++;
				}
				for(int k = ant; k < m; k++){
					if(dir[time[k][1]] == 0){
						ind.push_back(ants[i][1]);
						i++;
					}else{
						ind.push_back(ants[j][1]);
						j--;
					}
				}
				sort(ind.begin(), ind.end());
				for(auto &x : ind) antsOrder.push_back(x);
				ant = m-1;
			}
			for(int i = 0; i < n; i++){
				cout<<antsOrder[i]<<" ";
			}
			cout<<"\n";
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
