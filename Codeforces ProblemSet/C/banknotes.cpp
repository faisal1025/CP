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
		ll n, k;
		cin>>n>>k;

		vector<ll> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		ll ans = 0;
		if(n == 1 || k < 9){
			cout<<k+1<<"\n";
			continue;
		}
		
		k++;
		for(int i = 0; i < n-1; i++){
			if(k > 0){
				ll maxNote = ((ll)pow(10, arr[i+1]-arr[i]));
				maxNote--;
				ll canTake = min(maxNote, k);
				ans += (pow(10, arr[i]))*canTake;
				k -= canTake;
			}else{
				break;
			}
		}

		if(k > 0){
			ans += (pow(10, arr[n-1]))*k;
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
