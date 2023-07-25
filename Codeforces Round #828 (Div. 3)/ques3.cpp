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
		char c;
		cin>>n>>c;
		string s;
		cin>>s;
		
		if(c == 'g') {cout<<0<<endl; continue;}
		
		stack<int> st;

		int ans = INT_MIN;
		for(int i = 0; i < n; i++){
			if(st.size() == 0 and s[i] == c){
				st.push(i);
			}
            else if(!st.empty() and s[i] == 'g'){
				int ind = st.top();
				st.pop();
				ans = max(ans, i-ind);
			}

		}
		if(st.size() > 0){
			for(int i = 0; i < n; i++){
				if(s[i] == 'g'){
					int ind = st.top();
					st.pop();
					ans = max(ans, (n-ind)+i);
					break;
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
