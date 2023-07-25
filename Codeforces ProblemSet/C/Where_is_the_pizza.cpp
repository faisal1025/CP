#include<bits/stdc++.h>
#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

const int mod = 1e9+7;

class Solution{
private:
	void dfs(vector<int> &mp, int node, vector<int> &visited){
		visited[node] = 1;

		if(!visited[mp[node]])
			dfs(mp, mp[node], visited);
	}

public:
	void solve(){

		// Write your code here
		int t;
		cin>>t;

		while(t--){
			int n;
			cin>>n;

			vector<int> a(n+1);
			vector<int> b(n+1);
			vector<int> c(n+1);
			for(int i = 1; i <= n; i++)cin>>a[i];
			for(int i = 1; i <= n; i++)cin>>b[i];
			for(int i = 1; i <= n; i++)cin>>c[i];

			vector<int> upper(n+1);
			vector<int> lower(n+1);
			for(int i = 1; i <= n; i++){
				upper[a[i]] = b[i];
				lower[b[i]] = a[i];
			}

			vector<int>visited(n+1, 0);
			for(int i = 1; i <= n; i++){
				if(!visited[c[i]] and c[i] != 0){
					if(b[i] == c[i]){
						dfs(upper, c[i], visited);
					}else{
						dfs(lower, c[i], visited);
					}
				}
			}
			
			int ans = 1;
			for(int i = 1; i <= n; i++){
				if(visited[a[i]] == 0 and visited[b[i]] == 0){
					if(a[i] == b[i]) {visited[a[i]] = 1; continue;}
					ans = (ans%mod * 2%mod)%mod;
					dfs(upper, b[i], visited);
				}
			}

			cout<<ans<<endl;
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
