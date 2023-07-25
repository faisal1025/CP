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

bool comp(pair<ll, ll> &a, pair<ll, ll> &b){
	return (a.second < b.second);
}

void solve(){

	// Write your code here
	int n, m;
	cin>>n>>m;

	vvll mat(n+1, vector<ll> (m+1, 0));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin>>mat[i][j];
		}
	}

	unordered_map<ll, vector<pair<ll, ll>>> ump;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			ump[mat[i][j]].push_back({i, j});
		}
	}

	ll finalSum = 0;
	for(auto it : ump){
		vector<pair<ll, ll>> p = it.second;
		sort(p.begin(), p.end());
		ll sum = 0;
		int sz = p.size();
		for(int k = 0; k < sz; k++){
			sum += p[k].first;
		}
		for(int k = 0; k < sz; k++){
			sum -= p[k].first;
			finalSum += (sum - ((sz-k-1)*p[k].first));
		}

		sort(p.begin(), p.end(), comp);
		sum = 0;
		for(int k = 0; k < sz; k++){
			sum += p[k].second;
		}
		for(int k = 0; k < sz; k++){
			sum -= p[k].second;
			finalSum += (sum - (sz-k-1)*p[k].second);
		}
	}
	cout<<finalSum<<"\n";
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
