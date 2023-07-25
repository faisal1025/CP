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
		for(int i = 0; i < n; i++) cin>>arr[i];

		bool possible = true;
		
		vector<int> even;
		vector<int> odd;
		for(int i = 0; i < n; i++){
			
				if(arr[i]%2 == 0)
					even.push_back(arr[i]);
				else
					odd.push_back(arr[i]);
			
		}
		int evenSz = even.size();
		int oddSz = odd.size();
		vector<int> v1 = even;
		vector<int> v2 = odd;
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());

		for(int i = 0; i < evenSz-1; i++){
			if(v1[i] != even[i]) possible = false;
		}
		for(int i = 0; i < oddSz-1; i++){
			if(v2[i] != odd[i]) possible = false;
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
