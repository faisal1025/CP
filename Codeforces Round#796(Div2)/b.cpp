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

		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}

		int even = 0, odd = 0;

		for(int i = 0; i < n; i++){
			if(arr[i]%2 == 0)
				even++;
			else
				odd++;
		}

		if(odd == n){
			cout<<0<<endl;
			continue;
		}

		if(even < n){
			cout<<even<<endl;
			continue;
		}
		else if(even == n){
			int mnStep = INT_MAX;
			for(int i = 0; i < n; i++){
				int cnt = 0;
				int x = arr[i];
				//cout<<"for :"<<x<<" ";
				while(x%2 == 0){
					//cout<<x<<" ";
					x = (x >> 1);
					cnt++;
				}
				//cout<<endl;
				mnStep = min(mnStep, cnt);
			}
			//cout<<mnStep<<endl;
			cout<<mnStep+(n-1)<<endl;
		}

	}

}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
