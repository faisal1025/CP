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
		int w = 0, b = 0;

		int ans = INT_MAX;
		for(int i = 0; i < k; i++){
			if(s[i] == 'W') w++;
			else b++;
		}
		ans = min(ans, w);
		for(int i = 0, j = k-1; j < n;){
			if(s[i] == 'W') w--;
			else b--;
			i++; j++;
			if(j >= n) break;
			if(s[j] == 'W') w++;
			else b++;
			ans = min(ans, w);
		}
		cout<<ans<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
