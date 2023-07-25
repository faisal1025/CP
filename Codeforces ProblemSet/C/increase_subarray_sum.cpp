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

		vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		vector<int> best_ans(n+1, INT_MIN);

		best_ans[0] = 0;
		for(int i = 1; i <= n; i++){
			int sum = 0;
			for(int j = 0; j < i; j++)
				sum += arr[j];

			best_ans[i] = max(best_ans[i], sum);
			for(int j = 0, k = i-1; k < n;){
				sum -= arr[j];
				j++; k++;
				if(k == n) break;
				sum += arr[k];
				best_ans[i] = max(best_ans[i], sum);
			}
		}

		
		vector<int> ans(n+1, INT_MIN);
		for(int k = 0; k <= n; k++){
			for(int i = 0; i <= n; i++){
				if(k <= i){
					ans[k] = max(ans[k], best_ans[i]+(k*x));
				}else{
					ans[k] = max(ans[k], best_ans[i]+(i*x));
				}
			}
		}

		for(int i = 0; i <= n; i++)
			cout<<ans[i]<<" ";
		cout<<"\n";

	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
