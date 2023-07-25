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

		vector<int> arr(n+1);
		for(int i = 1; i <= n; i++) 
			cin>>arr[i];

		vvi br(n+1, vector<int> (n+1, 0));
		vvi cr(n+1, vector<int> (n+1, 0));

		// constraint n <= 5000 
		// it mean O(n^2) can be good

		for(int i = 1; i <= n; i++){
			for(int j = i+1; j <= n; j++){
				if(arr[i] > arr[j]){
					br[i][j] = br[i][j-1]+1;
				}
				else{
					br[i][j] = br[i][j-1];
				}
			}
		}

		for(int i = n; i > 0; i--){
			for(int j = i-1; j > 0; j--){
				if(arr[i] > arr[j]){
					cr[i][j] = cr[i][j+1]+1;
				}
				else{
					cr[i][j] = cr[i][j+1];
				}
			}
		}


		int64_t ans = 0;

		for(int i = 2; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				ans += (br[i][n]-br[i][j])*(cr[j][1]-cr[j][i]);
			}
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
