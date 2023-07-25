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

		vector<ll> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		string s;
		cin>>s;

		vector<ll> blue;
		vector<ll> red;

		for(int i = 0; i < n; i++){
			if(s[i] == 'B'){
				blue.push_back(arr[i]);
			}else{
				red.push_back(arr[i]);
			}
		}

		sort(begin(blue), end(blue));
		sort(begin(red), end(red));

		ll tar = 1;
		bool possible = true;
		for(int i = 0; i < blue.size(); i++){
			if(blue[i] < tar){
				possible = false;
			}
			tar++;
		}
		for(int i = 0; i < red.size(); i++){
			if(red[i] > tar){
				possible = false;
			}
			tar++;
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
