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
		ll x;
		cin>>x;

		int ans;
		if(x%2 != 0){
			if(x == 1) 
				ans = 3;
			else
				ans = 1;
		}
		else{
			if((x & x-1) == 0){
				ans = x+1;
			}
			else{
				for(int i = 1; i <= 31; i++){
					int tar = (1 << i);

					if((x & tar) == tar){
						
						ans = tar;
						break;
					}
				}
			}
			
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
