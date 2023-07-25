#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; // find_by_order(ind), order_of_key(key)


void dfs(int node, int parent, vector<pair<int, int>> adj[], vector<int> &ans, int wt){

	for(auto p:adj[node]){
		int adjNode = p.first;
		int ind = p.second;
		if(adjNode == parent) continue;
		ans[ind] = wt;
		if(wt == 3) wt = 2;
		else wt = 3;
		dfs(adjNode, node, adj, ans, wt);
	}
}

void solve(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		vector<pair<int, int>> adj[n+1];
		bool possible = true;
		for(int i = 1; i < n; i++){
			int u, v;
			cin>>u>>v;
			adj[u].push_back({v, i});
			adj[v].push_back({u, i});
			
			if(adj[u].size() > 2 || adj[v].size() > 2){
				possible = false;
			}
		}
		
		int leaf;
		for(int i = 1; i <= n; i++){
			if(adj[i].size() == 1){
				leaf = i;
			}
		}

		if(possible == true){
			vector<int> ans(n); 
			dfs(leaf, -1, adj, ans, 3);
			for(int i = 1; i < n; i++){
				cout<<ans[i]<<" ";
			}
			cout<<endl;
		}else{
			cout<<-1<<"\n";
		}
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
