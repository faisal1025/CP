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
		ll n;
		cin>>n;

		vector<ll> arr(n);
		bool allZero = true;
		for(int i = 0; i < n; i++) {
			cin>>arr[i];
		}

		ll last = -1;
		bool possible = true;
		for(int i = n-1; i >= 0; i--){
			if(arr[i] != 0){
				last = i+1;
				break;
			}
		}

		if(last == -1){
			cout<<"YES\n";
			continue;
		}

		vector<ll> prefix(last+1, 0);
		for(int i = 1; i <= last; i++){
			prefix[i] = prefix[i-1]+arr[i-1];
		}

		if(prefix[last] != 0){
			cout<<"NO\n";
			continue;
		}

		for(int i = 1; i < last; i++){
			if(prefix[i] <= 0){
				possible = false;
				break;
			}
		}

		if(possible) cout<<"YES\n";
		else cout<<"NO\n";	
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
