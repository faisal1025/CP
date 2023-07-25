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

		vector<ll> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		vvll grid(n, vector<ll>(30, 0));

		for(int i = 0; i < n; i++){
			for(int j = 0; j < 30; j++){
				ll x = 1 << j;
				if(arr[i] & x) grid[i][j] = 1;
			}
		}

		vector<ll> s(30, 0);
		for(int i = 0; i < 30; i++){
			for(int j = 0; j < n; j++){
				if(grid[j][i] == 1) s[i]++;
			}
		}

		for(int i = 1; i <= n; i++){
			bool possible = true;
			for(int j = 0; j < 30; j++){
				if(s[j]%i != 0) {
					possible = false;
				}
			}
			if(possible == true) cout<<i<<" ";
		}
		cout<<"\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
