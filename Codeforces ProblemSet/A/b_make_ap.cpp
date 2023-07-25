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
		int a, b, c;
		cin>>a>>b>>c;

		if(a-b == b-c){
			cout<<"Yes\n";
			continue;
		}

		bool possible = false;
		
		if(a-b > b-c){
			if((a+c)%2 == 0){
				int req = (a+c)/2;
				if(req%b == 0){
					possible = true;
				}
			}
		}
		else{
			int req = b-(a-b);
			if(req%c == 0){
				possible = true;
			}
			req = b+(b-c);
			if(req%a == 0){
				possible = true;
			}
		}

		if(possible) cout<<"Yes\n";
		else cout<<"No\n";		
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
