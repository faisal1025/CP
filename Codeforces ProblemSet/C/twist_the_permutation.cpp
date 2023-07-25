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

		vector<int> arr(n+1);
		for(int i  = 1; i <= n; i++)
			cin>>arr[i];

		vector<int> ans(n+1);
		for(int i = n; i >= 1; i--){
			
			if(arr[i] == i){
				ans[i] = 0;
				continue;
			}
			for(int j = i; j >= 1; j--){
				if(arr[j] == i){
					ans[i] = j;
					
					vector<int> temp(i+1);
					int l = 1;
					for(int k = j+1; k <= i; k++, l++){
						temp[l] = arr[k];
					}
					for(int k = 1; k <= j; k++, l++){
						temp[l] = arr[k];
					}
					for(int k = 1; k <= i; k++){
						arr[k] = temp[k];
					}
					break;
				}
			}
		}
		for(int i = 1; i <= n; i++)
			cout<<ans[i]<<" ";
		cout<<endl;

		// 0 1 2 0 2 5 6 2
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
