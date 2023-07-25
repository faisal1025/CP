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
		int n, m;
		cin>>n>>m;

		vvi grid(n, vector<int> (m, 0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin>>grid[i][j];
			}
		}

		int mx = INT_MIN, posx, posy;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(grid[i][j] > mx){
					mx = grid[i][j];
					posx = i+1;
					posy = j+1;
				}
			}
		}

		int ans = INT_MIN;
		ans = max(ans, posx*posy);

		int x = (n-posx)+1;
		int y = (m-posy)+1;

		ans = max(ans, x*posy);
		ans = max(ans, posx*y);
		ans = max(ans, x*y);

		cout<<ans<<"\n";

	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
