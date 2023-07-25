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
		int n, k;
		cin>>n>>k;

		vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		sort(arr.begin(), arr.end());
		ll sum = 0;
		ll s1 = 0, s2 = 0;
		int i = n-2*k;
		int j = n-k;
		while(j < n){
			s1 += arr[i]/arr[j];
			i++; j++;
		}

		
		for(int x = 0; x < n-2*k; x++){
			s1 += arr[x];
		}
		cout<<s1<<"\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}