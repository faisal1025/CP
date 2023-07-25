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
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		vector<ll> v1;
		for(int i = 0; i < n; i += 2){
			v1.push_back(arr[i]);
		}
		vector<ll> v2;
		for(int i = 1; i < n; i += 2){
			v2.push_back(arr[i]);
		}

		ll gcdv1 = 0, gcdv2 = 0;
		for(int i = 0; i < v1.size(); i++){
			gcdv1 = __gcd(v1[i], gcdv1);
		}

		for(int i = 0; i < v2.size(); i++){
			gcdv2 = __gcd(v2[i], gcdv2);
		}

		bool poss = true;
		for(int i = 0; i < v1.size(); i++){
			if(v1[i]%gcdv2 == 0) poss = false;
		}
		if(poss == true) {
			cout<<gcdv2<<endl;
			continue;
		}
		poss = true;
		for(int i = 0; i < v2.size(); i++){
			if(v2[i]%gcdv1 == 0) poss = false;
		}
		if(poss == true) {
			cout<<gcdv1<<endl;
		}else{
			cout<<0<<endl;
		}
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
