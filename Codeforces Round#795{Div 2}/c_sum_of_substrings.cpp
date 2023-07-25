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
		ll n, k;
		cin>>n>>k;

		string s;
		cin>>s;

		for(int i = n-1; i >= 0; i--){
			if(k == 0) break;

			if(s[i] == '1'){
				int req = (n-1)-i;
				if(k >= req){
					k = k-req;
					swap(s[i], s[n-1]);
				}
				break;
			}
		}

		for(int i = 0; i < n-1; i++){
			if(k == 0) break;

			if(s[i] == '1'){
				int req = i;
				if(k >= req){
					k = k-req;
					swap(s[0], s[i]);
				}
				break;
			}
		}
		ll sum = 0;
		for(int i = 0; i < n-1; i++){
			int d1 = s[i]-'0';
			int d2 = s[i+1]-'0';
			int num = (d1*10)+d2;
			sum += num;
		}
		cout<<sum<<"\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
