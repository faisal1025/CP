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

bool isPossible(vector<ll> &expert, ll mid, ll n, ll m){

	vector<ll> workers(n+1, mid);
	ll rem = 0;
	for(int i = 0; i < m; i++){
		if(workers[expert[i]] == 0){
			rem++;
		}
		else if(workers[expert[i]] > 0){
			workers[expert[i]]--;
		}
	}
	ll task = 0;
	for(int i = 1; i <= n; i++){
		if(workers[i] >= 2){
			task += workers[i]/2;
		}
	}

	if(task >= rem)
		return true;
	else
		return false;
}


void solve(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		ll n, m;
		cin>>n>>m;

		vector<ll> expert(m);
		for(int i = 0; i < m; i++)
			cin>>expert[i];

		sort(begin(expert), end(expert));

		ll st = 1;
		ll en = m*2;

		while(st < en){
			ll mid = (st+en)/2;

			if(isPossible(expert, mid, n, m)){
				en = mid;
			}else{
				st = mid+1;
			}
		}

		cout<<en<<"\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
