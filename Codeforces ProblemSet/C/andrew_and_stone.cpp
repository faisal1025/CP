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

		vector<ll> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		ll ans = 0;
		if(n == 3){
			if(arr[1]%2 != 0){
				cout<<-1<<endl;
			}else{
				cout<<arr[1]/2<<endl;
			}
			continue;
		}

		bool possible = false;
		for(int i = 1; i < n-1; i++){
			if(arr[i] == 1) continue;
			else{
				possible = true;
				break;
			}
		}

		if(possible == false) ans = -1;
		else{
			for(int i = 1; i < n-1; i++){
				if(arr[i]%2 == 0){
					ans += arr[i]/2;
				}else{
					ans += (arr[i]+1)/2;
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
