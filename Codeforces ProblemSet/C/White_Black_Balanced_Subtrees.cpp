#include<bits/stdc++.h>
#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

class Solution{
private:
	void numOfBalanced(int node, vector<int> *adj, string &s, int &w, int &b, int &ans) {
		int loc_w = 0, loc_b = 0;

		for(auto adjNode : adj[node]){
			numOfBalanced(adjNode, adj, s, loc_w, loc_b, ans);
			w += loc_w;
			b += loc_b;
			loc_b = loc_w = 0;
		}
	
		s[node-1] == 'W' ? w += 1 : b += 1;
		
		if(w == b) ans++;
	}

public:
	void solve(){

		// Write your code here
		int t;
		cin>>t;

		while(t--){
			int n;
			cin>>n;

			vector<int> parent(n+1);
			for(int i = 2; i <= n; i++) cin>>parent[i];
			string s;
			cin>>s;

			vector<int> adj[n+1];
			for(int i = 2; i <= n; i++){
				adj[parent[i]].push_back(i);
			}

			int w, b, ans;
			w = b = ans = 0;
			numOfBalanced(1, adj, s, w, b, ans);
			cout<<ans<<"\n";
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
