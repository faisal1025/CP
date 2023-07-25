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
		string n;
		cin>>n;

		int ans = INT_MAX;
		for(int i = 0; i < 60; i++){
			ll num = pow(2, i);

			string temp = to_string(num);
			// cout<<temp<<" - ";
			int k = 0, cnt = 0;
			for(int j = 0; j < temp.length(); j++){
				if(k == n.length()) cnt++;
				else{
					bool flag = 1;
					while(k < n.length()){
						if(n[k] == temp[j]){
							k++;
							flag = 0;
							break;
						}else{
							cnt++;
						}
						k++;
					}

					if(k == n.length() and flag == 1) cnt++;
				}	
			}
			if(k < n.length()) cnt += n.length()-k;
			// cout<<cnt<<"\n";
			ans = min(ans, cnt);
		}
		cout<<ans<<"\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
