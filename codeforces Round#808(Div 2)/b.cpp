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
		ll n, l, r;
		cin>>n>>l>>r;

		//Solution
		if(n > r){
			cout<<"NO\n";
			continue;
		}
		vector<ll> res(n+1);
		res[1] = l;
		bool possible = true;
		for(ll i = 2; i <= n; i++){
			int rem = l % i;
			if(rem == 0) res[i] = l;
			else res[i] = (l + (i - rem));

			if(l <= res[i] and res[i] <= r) continue;
			else {possible = false; break;}
		}
		if(possible) {
			cout<<"Yes\n";
			for(int i = 1; i < n+1; i++){
				cout<<res[i]<<" ";
			}
			cout<<"\n";
		}else{
			cout<<"NO\n";
		}

	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
