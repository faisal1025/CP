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
		double hc, dc;
		cin>>hc>>dc;

		double hm, dm;
		cin>>hm>>dm;

		double k, w, a;
		cin>>k>>w>>a;

		bool possible = false;
		for(int d = k, h = 0; d >= 0 and h <= k; d--, h++){
			double att = dc+w*d;
			double hel = hc+a*h;

			double ct = ceil(hm/att);
			double mt = ceil(hel/dm);
			if(ct <= mt){
				possible = true;
				break;
			}
		}

		if(possible){
			cout<<"YES\n";
		}
		else{
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
