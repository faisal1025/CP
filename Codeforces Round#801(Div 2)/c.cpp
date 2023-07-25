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
		ll n, m;
		cin>>n>>m;

		vvll grid(n, vector<ll>(m, 0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin>>grid[i][j];
			}
		}

		ll dist = (n-1) + (m-1);
		if(dist % 2 == 0){
			cout<<"NO\n";
			continue;
		}
		
		vector<vector<vector<ll>>> sum(n, vector<vector<ll>>(m, vector<ll>(2, 0)));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(j == 0 and i == 0) {
					sum[i][j][0] = grid[i][j];
					sum[i][j][1] = grid[i][j];
				} 
				else if(i == 0) {
					sum[i][j][0] = grid[i][j]+sum[i][j-1][0];
					sum[i][j][1] = grid[i][j]+sum[i][j-1][1];
				}
				else if(j == 0){
					sum[i][j][0] = grid[i][j]+sum[i-1][j][0];
					sum[i][j][1] = grid[i][j]+sum[i-1][j][1];
				}
				else{
					sum[i][j][0] = min(sum[i][j-1][0], sum[i-1][j][0])+grid[i][j];
					sum[i][j][1] = max(sum[i][j-1][1], sum[i-1][j][1])+grid[i][j];
				}
			}
		}

		bool possible = false;
		for(ll i = sum[n-1][m-1][0]; i <= sum[n-1][m-1][1]; i += 2){
			if(i == 0){
				possible = true;
				break;
			}
		}
		if(possible == true)
			cout<<"YES\n";
		else
			cout<<"NO\n";	

	}
}


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
