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


void solve(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int n, k;
		cin>>n>>k;

		vector<int> station(n);
		for(int i = 0; i < n; i++)
			cin>>station[i];

		map<int, vector<int>> mp;

		for(int i = 0; i < n; i++){
			mp[station[i]].push_back(i);
		}

		for(int i = 0; i < k; i++){
			int a, b;
			cin>>a>>b;

			if(mp.find(a) != mp.end() and mp.find(b) != mp.end()){
				int st = mp[a][0];
				int en = mp[b][mp[b].size()-1];
				if(st <= en){
					cout<<"YES\n";
				}else{
					cout<<"NO\n";
				}
			}else{
				cout<<"NO\n";
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
