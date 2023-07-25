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

void bfs(set<string> s, string &curr, int turn, string &final){

	queue<string> q;
	for(auto &it : s){
		if(it == curr) continue;
		else q.push(it);
	}

	while(!q.empty()){
		
	}
}

void solve(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		vector<string> t;
		for(int i = 0; i < 2*n; i++){
			string st;
			cin>>st;
			t.push_back(st);
		}

		string final;
		cin>>final;

		set<string> f;
		for(int i = 0; i < n; i++){
			f.insert(t[i]);
		}

		for(int i = 0; i < n; i++){
			if(t[i].length() == 1){
				bfs(f, t[i], n, final);
			}
		}
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
