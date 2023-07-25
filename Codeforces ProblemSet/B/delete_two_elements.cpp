#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

#define ll long long
#define ld long double
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

		vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		ld s = 0;
		for(int i = 0; i < n; i++){
			s += arr[i];
		}
		ld k = s/n;
		ld sum = k * (n-2);
		ld req = s-sum;

		map<ld, ll> ump;
		ll ans = 0;
		for(int i = 0; i < n; i++){
			if(ump.find((req-arr[i])) != ump.end()){
				ans += ump[req-arr[i]];
			}
			ump[arr[i]]++;
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
