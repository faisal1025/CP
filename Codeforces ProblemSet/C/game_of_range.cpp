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

		map<pair<int, int>, bool> present;
		vector<pair<int, int>> vec;
		for(int i = 0; i < n; i++){
			int l, r;
			cin>>l>>r;
			pair<int, int> p = {l, r};
			vec.push_back(p);
			present[{l, r}] = true;
		}
		
		vector<vector<int>> ans;
		for(int i = 0; i < n; i++){
			int a = vec[i].first;
			int b = vec[i].second;
			if(a == b) ans.push_back({a, b, a});
			for(int j = a; j <= b; j++){
				if(j == a){
					if(present[{j+1, b}])
						ans.push_back({a, b, a});
				}else if(j == b){
					if(present[{a, j-1}])
						ans.push_back({a, b, b});
				}else{
					if(present[{a, j-1}] and present[{j+1, b}])
						ans.push_back({a, b, j});
				}
			}
			
		}

		for(int i = 0; i < n; i++){
			cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
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
