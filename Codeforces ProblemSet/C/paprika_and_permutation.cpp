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
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		sort(arr.begin(), arr.end());
		
		bool possible = true;
		int cnt = 0;
		vector<int> map(n+1);
		vector<int> ele;
		for(int i = 0; i < n; i++){
			if(arr[i] <= n){
				if(map[arr[i]] == 1){
					ele.push_back(arr[i]);
					continue;
				}
				map[arr[i]] = 1;
			}else{
				ele.push_back(arr[i]);
			}
		}

		sort(ele.begin(), ele.end());
		int ind = 0;
		for(int i = 1; i <= n; i++){
			if(map[i] == 0){
				if(ele[ind] > i){
					int req = ele[ind]-i;
					cnt++;
					if(ele[ind]%req != i) {possible = false; break;}
				}else if(ele[ind] < i){
					possible = false;
					break;
				}
				ind++;
			}
		}

		if(possible) cout<<cnt<<endl;
		else cout<<-1<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
