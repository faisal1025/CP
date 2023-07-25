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

		vector<int> arr(n);
		for(int i = 0; i < n ; i++)
			cin>>arr[i];

		int e = k;
		ll ans = 0, cnt = 0;
		for(int i = 1; i < n; i++){
			if(arr[i-1] <= arr[i]){
				cnt++;
			}else{
				if(arr[i-1] < arr[i]*2){
					cnt++;
				}else{
					if(cnt >= k){
						ans += 1;
						ans += cnt-k;
					}
					cnt = 0;
				}
			}
		}
		if(cnt >= k){
			ans += 1;
			ans += cnt-k;
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
