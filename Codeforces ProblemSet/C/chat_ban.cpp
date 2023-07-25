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

pair<ll, ll> ispossible(ll mid, ll left, ll right, ll k, ll x, ll total){
	if(mid == k){
		ll total_x = (mid*(mid+1))/2;
		pair<ll, ll> p = {(total_x-mid)+1, total_x};
		return p;
	}
	else if(mid < k){
		ll total_x = (mid*(mid+1))/2;
		pair<ll, ll> p = {(total_x-mid)+1, total_x};
		return p;
	}
	else{
		ll b = k-((mid+1)%k);

		ll total_x = total-(b*(b+1))/2;
		ll c = k-((mid)%k);
		pair<ll, ll> p = {total_x-c, total_x};
		return p;
	}
}

void solve(){

	// Write your code here
	ll t;
	cin>>t;

	while(t--){
		ll k, x;
		cin>>k>>x;
		ll total = ((k*(k+1))/2 + ((k-1)*(k))/2);
		ll left = 1;
		ll right = (2*k)-1;
		ll ans = right;
		if(total <= x) {
			cout<<right<<"\n";
			continue;
		}
		
		while(left <= right){
			ll mid = (left+right)/2;
			
			pair<ll, ll> p = ispossible(mid, left, right, k, x, total);
			
			ll a = p.first;
			ll b = p.second;
			if(a <= x and x <= b){
				ans = mid;
				break;
			}
			else if(x < a){
				// cout<<"x < a\n";
				right = mid;
			}
			else if(b < x){
				// cout<<"b > x\n";
				left = mid;
			}
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
