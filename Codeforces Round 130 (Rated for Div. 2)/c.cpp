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
	int q;
	cin>>q;

	while(q--){
		int n;
		cin>>n;

		string s, t;
		cin>>s;
		cin>>t;

		int a = 0, b = 0, c = 0;
		for(int i = 0; i < n; i++){
			if(s[i] == 'a') a++;
			else if(s[i] == 'b')b++;
			else c++;
		}
		for(int i = 0; i < n; i++){
			if(t[i] == 'a') a--;
			else if(t[i] == 'b')b--;
			else c--;
		}

		int ac = 0, cc = 0;
		if(a == 0 and b == 0 and c == 0){
			bool possible = true;
			for(int i = 0; i < n; i++){
				if(s[i] == t[i]){
					if(ac > 0 and s[i] == 'c'){
						possible = false;
						break;
					}
					if(cc > 0 and s[i] == 'a'){
						possible = false;
						break;
					}
				}
				if(s[i] != t[i]){
					char a = s[i];
					char b = t[i];
					int j;
					if(a == 'a' and b == 'c'){
						possible = false;
						break;
					}
					else if(a == 'c' and b == 'a'){
						possible  = false;
						break;
					}
					else if(a == 'b' and b == 'a'){
						if(ac == 0){
							possible = false;
							break;
						}
						ac--;
					}
					else if(a == 'c' and b == 'b'){
						if(cc == 0){
							possible = false;
							break;
						}
						cc--;
					}
					else if(a == 'a' and b == 'b'){
						if(cc > 0){
							possible = false;
							break;
						}
						ac++;
					}
					else if(a == 'b' and b == 'c'){
						if(ac > 0){
							possible =false;
							break;
						}
						cc++;
					}


				}
			}
			if(possible) cout<<"YES\n";
			else cout<<"NO\n";
		}else{
			cout<<"NO\n";
		}
		
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
