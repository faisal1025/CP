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
		int n, x;
		cin>>n>>x;
		vector<ll> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		unordered_map<int, int> ump;
		for(int i = 0; i < n; i++)
			ump[arr[i]]++;

		sort(arr.begin(), arr.end());

		int cnt = 0;
		for(int i = n-1; i >= 0; i--){
			if(ump[arr[i]] > 0){
				if(arr[i] % x == 0 and ump[arr[i]/x] > 0){
					ump[arr[i]]--;
					ump[arr[i]/x]--;
				}else{
					ump[arr[i]]--;
					cnt++;
				}
			}
			
		}
		cout<<cnt<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
