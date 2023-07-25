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

		int ans = -1;
		unordered_map<int, int> ump;
		for(int i = 1; i <= n; i++){
			if(ump[arr[i]] == 0) ump[arr[i]] = i;
			else{
				int l = ump[arr[i]];
				l += (n-i);
				ans = max(ans, l);
				ump[arr[i]] = i;
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
