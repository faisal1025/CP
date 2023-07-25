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

const ll mod = 1e9+7;

ll binpow(ll a, ll b, ll m){
	if(b == 0)
		return 1;
	if(b % 2 == 0){
		ll t = binpow(a, b/2, m);
		t = (1ll* t * t) % m;
		return t;
	}else{
		ll t = binpow(a, (b-1)/2, m);
		t = (t * t) % m;
		return (1ll* a * t) % m;
	}
}

void solve(){

	// Write your code here
	int x;
	cin>>x;

	ll m = 0;
	ll node = pow(2, x);
	node -= 2;
	m = binpow(4, node, mod);
	m *= 6;
	cout<<m%mod<<"\n";
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
