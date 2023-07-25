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
		vector<string> arr(n);
		for(int i = 0; i < n; i ++) cin>>arr[i];

		unordered_map<string, int> ump;
		for(int i = 0; i < n; i ++){
			ump[arr[i]] = 1;
		}
		string ans = "";
		for(int i = 0; i < n; i ++){
			string curr = arr[i]; bool done = 0; int sz = curr.size();
			for(int i = 1; i < sz; i++){
				string first = curr.substr(0, i);
				string second = curr.substr(i);
			
				if(ump[first] == 1 and ump[second] == 1){
					done = 1;
					break;
				}
			}
			if(done) ans += '1';
			else ans += '0';
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
