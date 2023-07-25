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
	
		int n, q;
		cin>>n>>q;

		vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		sort(arr.begin(), arr.end());

		vector<ll> prefix(n+1, 0);
		for(int i = 1; i <= n; i++){
			prefix[i] = prefix[i-1]+arr[i-1];
		}

		for(int k = 0; k < q; k++){
			int x, y;
			cin>>x>>y;

			int i = n-x;
			int j = i+y;
			ll sum = 0;
			sum = prefix[j]-prefix[i];
			cout<<sum<<"\n";
		}
}
	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
