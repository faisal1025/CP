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
	ll t;
	cin>>t;

	while(t--){
		ll n;
		cin>>n;

		vector<ll> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		ll s = 0;
		for(int i = 0; i < n; i++)
			s += arr[i];

		unordered_map<ll, ll> ump;
		for(int i = 0; i < n; i++){
			ump[arr[i]]++;
		}

		vector<ll> res;
		queue<ll> q;
		q.push(s);
		while(!q.empty()){
			ll num = q.front();
			q.pop();
			if(ump[num] != 0){
				ump[num]--;
				res.push_back(num);
				continue;
			}

			double d = num;
			ll x = floor(d/2);
			ll y = ceil(d/2);
			q.push(x);
			q.push(y);
			if(q.size() > n)
				break;
		}

		if(res.size() == n){
			cout<<"YES\n";
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
