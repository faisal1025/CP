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
		int n, s;
		cin>>n>>s;

		vector<int> arr(n);
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}

		int sum = 0;
		int cnt_ones = 0;
		for(int i = 0 ; i < n; i++){
			sum += arr[i];
			if(arr[i] == 1) cnt_ones++;
		}

		if(sum < s){
			cout<<-1<<"\n";
		}
		else if(sum == s){
			cout<<0<<"\n";
		}
		else{
			int ans = INT_MAX;
			vector<int> ones(cnt_ones+1);
			int curr_sum = 0, ind = 1;
			for(int i = 0; i < n; i++){
				curr_sum += arr[i];
				if(arr[i] == 1){
					ones[ind++] = i+1;
				}

				if(curr_sum < s) continue;
				else{
					int waste = curr_sum-s;
					ans = min(ans, ones[waste]+n-(i+1));
				}
			}
			cout<<ans<<"\n";
		}
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
