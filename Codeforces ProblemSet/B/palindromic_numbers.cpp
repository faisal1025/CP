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
		string num;
		cin>>num;

		string ans = "";
		if(num[0] != '9'){
			for(int i = 0; i < n; i++){
				ans += (9-(num[i]-'0'))+'0';
			}
		}else{
			int flag = 1;
			for(int i = n-1; i >= 0; i--){
				int d = num[i]-'0';
				if(d < 2){
					if(flag) {ans += (flag - d)+'0'; flag = 1;}
					else {
						if(d == 0){
							ans += '0';
							flag = 1;
						}else if(d == 1){
							ans += '9';
							flag = 0;
						}
					} 
				}
				else{
					if(flag){
						ans += (11 - d)+'0';
						flag = 0;
					}else{
						ans += (10 - d)+'0';
						flag = 0;
					}
				}
			}
			reverse(begin(ans), end(ans));
		}
		
		cout<<ans<<"\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
