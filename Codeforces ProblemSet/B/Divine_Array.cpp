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
		int n;
		cin>>n;

		vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		vvi grid(n+1, vector<int> (n, 0));
		grid[0] = arr;
		vector<int> mp(n+1, 0);
		for(int i = 1; i <= n; i++){
			fill(mp.begin(), mp.end(), 0);
			
			for(int j = 0; j < n; j++){
				mp[grid[i-1][j]]++;
			}
			
			for(int j = 0; j < n; j++){
				grid[i][j] = mp[grid[i-1][j]];
			}
		}

		int q;
		cin>>q;

		for(int i = 0; i < q; i++){
			int p, a;
			cin>>p>>a;

			if(a <= n){
				cout<<grid[a][p-1]<<"\n";
			}else{
				cout<<grid[n][p-1]<<"\n";
			}
		}
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
