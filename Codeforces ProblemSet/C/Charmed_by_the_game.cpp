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

		int total = a+b;
		set<int> ways;

		int oddPos, evenPos;
		oddPos = (a+b)/2;
		evenPos = (a+b - oddPos);

		for(int i = 0; i < oddPos+1; i++){
			int ao, ae, bo, be;
			ao = i;
			ae = a-ao;
			bo = oddPos-ao;
			be = b-bo;

			if(ao < 0 || ae < 0 || bo < 0 || be < 0) continue;

			ways.insert((ao+be));
			ways.insert((bo+ae));
		}

		cout<<ways.size()<<endl;
		for(auto it : ways) cout<<it<<" ";
		cout<<endl;
	}
	
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
