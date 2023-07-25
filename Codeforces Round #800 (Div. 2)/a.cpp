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
		int a, b;
		cin>>a>>b;

		string bs = "";
		bool flag;
		if(a >= b) flag = true;
		else flag = false;
		while(a > 0 and b > 0){
			if(flag){
				bs += '0';
				flag = false;
				a--;
			}else{
				bs += '1';
				flag = true;
				b--;
			}
		}

		while(a > 0){
			bs += '0'; a--;
		}
		while(b > 0){
			bs += '1'; b--;
		}

		cout<<bs<<"\n";
	}
	
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
