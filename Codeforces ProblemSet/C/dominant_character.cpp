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

const ll INF = 1e9;

void solve(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		string s;
		cin>>s;
		vector<int> aCount(n+1, 0);
		vector<int> bCount(n+1, 0);
		vector<int> cCount(n+1, 0);

		for(int i = 0; i < n; i++){
			if(s[i] == 'a') aCount[i+1] = 1;
			else if(s[i] == 'b') bCount[i+1] = 1;
			else cCount[i+1] = 1;
		}

		for(int i = 1; i <= n; i++){
			aCount[i] += aCount[i-1];
			bCount[i] += bCount[i-1];
			cCount[i] += cCount[i-1];
		}


		int x = -1, y = -1;
		int ans = INF;
		for(int i = 0; i < n; i++){
			if(s[i] == 'a'){
				if(x == -1){
					x = i;
				}else if(y == -1){
					y = i;
				}
			}

			if(x != -1 and y != -1){
				int space = (y-x)-1;
				if(space == 2){
					if(s[y-1] != s[y-2]){
						ans = min(ans, 4);
					}
					x = y;
					y = -1;
				}
				else if(space > 2){
					x = y;
					y = -1;
				}
				else{
					int sz = (y-x)+1;
					ans = min(ans, sz);
					x = y; y = -1;
				}
			}
		}

		for(int x = 1, y = 7; y <= n; x++, y++){
			if(s[x-1] == 'a' and s[y-1] == 'a'){
				int cnt_of_a = aCount[y]-aCount[x-1];
				int cnt_of_b = bCount[y]-bCount[x-1];
				int cnt_of_c = cCount[y]-cCount[x-1];

				if(cnt_of_a > cnt_of_b and cnt_of_a > cnt_of_c){
					ans = min(ans, 7);
					break; 
				}
			}
		}
		if(ans == INF)
			cout<<-1<<"\n";

		else
			cout<<ans<<"\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}

