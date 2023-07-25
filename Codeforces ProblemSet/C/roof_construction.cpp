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
		int num;
		cin>>num;

		int n = num-1;
		while((n & n-1) != 0){
			n = (n & n-1);
		}
		vector<int> ans;
		for(int i = num-1; i >= n; i--){
			ans.push_back(i);
		}
		for(int i = 0; i < n; i++){
			ans.push_back(i);
		}

		for(int i = 0; i < ans.size(); i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
