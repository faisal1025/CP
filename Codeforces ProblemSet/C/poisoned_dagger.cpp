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


bool isPossible(vector<ll> &arr, ll n, ll mid, ll h){

	for(int i = 1; i < n; i++){
		ll dif = arr[i]-arr[i-1];
		if(dif >= mid){
			h -= mid;
		}else{
			h -= dif;
		}
		if(h <= 0){
			return true;
		}
	}

	h -= mid;
	return h <= 0 ? true : false; 
}

void solve(){

	// Write your code here
	ll t;
	cin>>t;

	while(t--){
		ll n, h;
		cin>>n>>h;

		vector<ll> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		ll low = 1;
		ll hi = h;

		while(low < hi){
			ll mid = (low+hi)/2;
			if(isPossible(arr, n, mid, h)){
				hi = mid;
			}else{
				low = mid+1;
			}
		}

		cout<<hi<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
