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
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		ll ans = 0;
		for(int i = 0; i < n; i++){
			ans += arr[i]/k;
		}
		vector<int> rem(n);
		for(int i = 0; i < n; i++){
			rem[i] = arr[i]%k;
		}

		sort(rem.begin(), rem.end());
		int i = 0, j = n-1;

		while(i < j){
			if(rem[i]+rem[j] < k){
				i++;
			}else{
				ans += (rem[i]+rem[j])/k;
				i++; j--;
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
