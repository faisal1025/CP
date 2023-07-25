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

		string s;
		cin>>s;
		
		string ans = "";
		if(s[0]-'a' <= s[1]-'a'){
			ans += s[0];
			ans += s[0];
			cout<<ans<<"\n";
		}
		else{
			ans += s[0];
			for(int i = 1; i < n; i++){
				if(s[i-1]-'a' >= s[i]-'a') {
					ans += s[i];
				}else{
					break;
				}
			}
			string rev = ans;
			reverse(rev.begin(), rev.end());
			ans += rev;
			cout<<ans<<endl;
		}	
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
