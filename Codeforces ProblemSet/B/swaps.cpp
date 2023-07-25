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
		int n;
		cin>>n;

		vector<int> a(n);
		vector<int> b(n);
		for(int i = 0; i < n; i++){
			cin>>a[i];
		}
		for(int i = 0; i < n; i++){
			cin>>b[i];
		}
		
		vector<pair<int, ll>> veca;
		for(int i = 0; i < n; i++){
			veca.push_back({a[i], i});
		}
		sort(veca.begin(), veca.end());
		vector<pair<int, ll>> vecb;
		for(int i = 0 ; i < n; i++){
			vecb.push_back({b[i], i});
		}
		vector<pair<int, ll>> prefix = vecb;
		sort(prefix.begin(), prefix.end());

		for(int i = n-2; i >= 0; i--){
			prefix[i].second = min(prefix[i+1].second, prefix[i].second);
		}
		ll ans = 1e18;
		for(int i = 0; i < n; i++){
			int val = veca[i].first;
			ll swap = veca[i].second;
			ans = min(ans, swap+prefix[i].second);
		}
		cout<<ans<<"\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
