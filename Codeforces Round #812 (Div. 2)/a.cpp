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

		vector<pair<int, int>> arr;
		for(int i = 0; i < n; i++){
			int x, y;
			cin>>x>>y;
			arr.push_back({x, y});
		}

		int x = 0, negx = 0, y = 0, negy = 0;
		for(int i = 0; i < n; i++){
			int p = arr[i].first;
			int q = arr[i].second;
			if(p != 0){
				if(p > 0) x = max(x, p);
				if(p < 0) negx = max(negx, p*-1);
			}
			if(q != 0){
				if(q > 0) y = max(y, q);
				if(q < 0) negy = max(negy, q*-1);
			}
		}

		ll ans = (x*2)+(negx*2)+(y*2)+(negy*2);
		cout<<ans<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
