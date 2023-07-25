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

		vector<string> grid(n+1);

		for(int i = 1; i <= n; i++){
			string s;
			cin>>s;
			grid[i] = s;
		}

		
		if(grid[1][0] == '1'){
			cout<<-1<<endl;
			continue;
		}
	
		
		vvi ans;
		for(int i = n; i >= 1; i--){
			for(int j = m-1; j >= 0; j--){
				if(grid[i][j] == '1'){

					if(j == 0){
						ans.push_back({i-1, j+1, i, j+1});
					}else{
						ans.push_back({i, j-1+1, i, j+1});
					}
				}
			}
		}
		int sz = ans.size();
		cout<<sz<<endl;
		for(int i = 0; i < sz; i++){
			cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<" "<<ans[i][3]<<"\n";
		}
		
	}	
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
