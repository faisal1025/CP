#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

#define ll long long int
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

		vector<ll> a(n);
		vector<ll> b(n);

		for(int i = 0; i < n; i++){
			cin>>a[i];
		}
		for(int i = 0; i < n; i++){
			cin>>b[i];
		}
		bool possible = true;
		if(n == 1){
			if(a[0] >= b[0]){
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}
			continue;
		}
		int d = INT_MAX;
		for(int i = 0; i < n; i++){
			if(b[i] != 0 and b[i] <= a[i]){
				d = a[i]-b[i];
				break;
			}
		}
		for(int i = 0; i < n; i++){
			if(b[i] > a[i]){
				possible = false;
				break;
			}
			if(a[i]-b[i] != d){
				if(a[i]-b[i] <= d and b[i] == 0) continue;
				possible = false;
			}
		}

		if(possible) cout<<"YES\n";
		else cout<<"NO\n";

	}
}	


int main(){
	
	// for fast io
	FAST_IO
	
	solve();
	

	return 0;
}
