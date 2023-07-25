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

		map<ll, ll> mp;
		for(int i = 0; i < n; i++){
			mp[arr[i]]++;
		}
		vector<ll> b;
		set<ll> s;
		ll expect = 0;
		for(int i = 0; i < n; i++){
			mp[arr[i]]--;
			s.insert(arr[i]);
			while(s.find(expect) != s.end()){
				expect++;
			}
			if(mp[expect] == 0){
				b.push_back(expect);
				s.clear();
				expect = 0;
			}
		}
		cout<<b.size()<<endl;
		for(auto it:b){
			cout<<it<<" ";
		}
		cout<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
