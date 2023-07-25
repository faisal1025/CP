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

		vector<int> arr(n);
		for(int i =0; i < n; i++)
			cin>>arr[i];

		vector<bool> visited(n+1, false);
		bool possible = true;
		for(int i = 0; i < n; i++){
			int curr = arr[i];
			possible = false;
			while(curr > 0 and possible == false){
				if(curr <= n and visited[curr] == false){
					visited[curr] = true;
					possible = true;
				}
				curr /= 2;
			}
			if(!possible) break;
		}

		if(possible) cout<<"YES\n";
		else cout<<"NO\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
