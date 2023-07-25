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

		vector<ll> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		vector<ll> subarr;
		ll sz = 0, ans = 0;
		for(int i = 0; i < n; i++){
			subarr.clear();
			sz = 0;
			for(int j = i; j < n; j++){
				subarr.push_back(arr[j]);
				sz++;
				ll cost = 0;
				for(int z = 0; z < sz; z++){
					
					subarr[z] == 0 ? cost += 1 : cost += 0;
				}
				//cout<<"\n";
				cost += sz;
				//cout<<cost<<endl;
				ans += cost;
			}
			//cout<<"ans - "<<ans<<"\n";
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
