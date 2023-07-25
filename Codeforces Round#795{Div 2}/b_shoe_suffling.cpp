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

		vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		int cnt = 1;
		bool possible = true;
		vector<int> ans(n);
		for(int i = 0; i <  n; i++)
			ans[i] = i+1;

		for(int i = 1; i < n; i++){
			if(arr[i] == arr[i-1]){
				cnt++;
				swap(ans[i], ans[i-1]);
			}else{
				if(cnt == 1){
					possible = false;
					break;
				}
				else{
					cnt = 1;
				}
			}
		}
		if(cnt == 1){
			possible = false;
		}
		if(possible){
			for(auto it : ans){
				cout<<it<<" ";
			}
			cout<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
