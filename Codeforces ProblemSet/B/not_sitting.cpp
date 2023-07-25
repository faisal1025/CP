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
		int n, m;
		cin>>n>>m;

		int rlim = n/2, clim = m/2;
		if(n%2 != 0) rlim += 1;
		if(m%2 != 0) clim += 1;

		vector<int> eachRow;
		vector<int> mat;
		for(int i  = 1; i <= rlim; i++){
			eachRow.clear();
			for(int j = 1; j <= clim; j++){
				int dis = abs(i-n)+abs(j-m);
				eachRow.push_back(dis);
				if(m%2 == 0 || j < clim)
					eachRow.push_back(dis);
			}
			for(auto &it : eachRow) mat.push_back(it);
			if(n%2 == 0 || i < rlim)
				for(auto &it : eachRow) mat.push_back(it);
		}
		sort(begin(mat), end(mat));
		for(int i = 0; i < mat.size(); i++)
			cout<<mat[i]<<" ";
		cout<<"\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
