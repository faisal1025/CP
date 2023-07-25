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

const int N = 2e5+1;
vvll arr(N, vector<ll> (32, 0));

void pp(){
	for(int i = 1; i < N; i++){
		for(int b = 0; b < 32; b++){
			int x = 1 << b;
			if(i & x){
				arr[i][b] = 1 + arr[i-1][b];
			}else{
				arr[i][b] = arr[i-1][b];
			}
		}
	}
}

void solve(){

	// Write your code here
	int t;
	cin>>t;

	pp();

	while(t--){
		int l, r;
		cin>>l>>r;
		int n = r-l+1;
		int ans = 1e6;
		for(int i = 0; i < 32; i++){
			int once = arr[r][i]-arr[l-1][i];
			int zeros = n-once;
			ans = min(ans, zeros);
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
