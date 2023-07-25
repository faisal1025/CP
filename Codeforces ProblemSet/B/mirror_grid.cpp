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

		vector<string> grid(n);
		for(int i = 0; i < n; i++){
			cin>>grid[i];
		}

		int xi = 0, xj = n-1, xk = n-1, xl = 0;
		int mnStep = 0;
		while(xi < n/2){
			int yi = xi, yj = xi, yk = xj, yl = xj;
			while(yi < xj){
				int zero = 0, one = 0;
				
				if(grid[xi][yi] == '0') zero++;
				else one++;
				if(grid[yj][xj] == '0') zero++;
				else one++;
				if(grid[xk][yk] == '0') zero++;
				else one++;
				if(grid[yl][xl] == '0') zero++;
				else one++;

				mnStep += min(zero, one);
				yi++; yj++; yk--; yl--;
			}
			xi++; xj--; xk--; xl++;
		}
		cout<<mnStep<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
