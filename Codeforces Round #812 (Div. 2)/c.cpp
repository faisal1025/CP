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
	const int mod = 1e9+7;
	int t;
	cin>>t;

	while(t--){
		// input
		int r, p;
		cin>>r>>p;

		vector<vector<int>> dp(r+1, vector<int> (2, 0));
		for(int i = 1; i <= r; i++){
			if(i <= p){
				dp[i][0] = 1;
				dp[i][1] = 0;
				continue;
			}
			dp[i][0] = (dp[i-1][0]%mod+dp[i-1][1]%mod)%mod;
			dp[i][1] = dp[i-1][0]%mod; 
		}

		if(r-p == 1 || r == p){
			cout<<1<<endl;
		}else{
			int ans = (dp[r][0]%mod+dp[r][1]%mod)%mod;
			cout<<ans<<endl;
		}
	}
}	


int main(){
	
	// for fast io
	// FAST_IO

	solve();
	

	return 0;
}
