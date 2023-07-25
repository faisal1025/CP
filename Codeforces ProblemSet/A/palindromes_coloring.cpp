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
		int n, k;
		cin>>n>>k;

		string s;
		cin>>s;

		vector<int> mp(26, 0);

		for(int i = 0; i < n; i++){
			mp[s[i]-'a']++;
		}

		int even = 0, odd = 0;
		for(int i = 0; i < 26; i++){
			if(mp[i] == 0) continue;
			int rem = mp[i]%2;
			if(rem == 0){
				even += mp[i];
			}else{
				even += mp[i]-1;
				odd += 1;
			}
		}

		int ans = even/k;

		if(ans % 2 == 0){
			odd += even%k;

			if(odd >= k) ans++;
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
