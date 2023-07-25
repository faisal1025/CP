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

ll sum(vector<ll> &a){
	ll s = 0;
	for(int i = 0; i < a.size(); i++){
		s += a[i];
	}
	return s;
}

void solve(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		ll n, m;
		cin>>n>>m;

		vector<ll> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		int k;
		cin>>k;

		vector<ll> arr2(k);
		for(int i = 0; i < k; i++)
			cin>>arr2[i];

		if(sum(arr) != sum(arr2)){
			cout<<"NO\n";
			continue;
		}

		if(arr == arr2){
			cout<<"YES\n";
			continue;
		}else if(m == 1){
			cout<<"NO\n";
			continue;
		}
		
		ll temp = 0;
		ll val, curr, cnt;
		bool possible = true;
		int i, j;
		for(i = 0, j = 0; i < n || j < k;){
			if(temp == 0){
				if(i == n || j == k) {possible = false; break;}
				curr = arr[i++];
				cnt = 1;
				while(curr % m == 0){
					cnt = cnt * m;
					curr = curr/m;
				}
				val = curr;
				temp += cnt;
			}
			else if(temp > 0){
				if(j == k) {possible = false; break;}
				curr = arr2[j++];
				cnt = 1;
				while(curr % m == 0){
					cnt = cnt * m;
					curr = curr/m;
				}
				if(val == curr)
				temp -= cnt;
				else{
					possible = false;
					break;
				}
			}
			else{
				if(i == n) {possible = false; break;}
				ll curr = arr[i++];
				ll cnt = 1;
				while(curr % m == 0){
					cnt = cnt * m;
					curr = curr/m;
				}
				if(val == curr)
				temp += cnt;
				else {
					possible = false;
					break;
				}
			}	
			
		}
		// if(temp != 0) possible = false;
		// cout<<"\n";
		// for(int i = 0; i < k; i++){
		// 	// cout<<b[i]<<" ";
			

		// }
		// // cout<<"\n";

		// bool possible = true;
		// for(auto it : mpa){
		// 	int key = it.first;
		// 	ll cnt = it.second;
		// 	// cout<<key<<": "<<mpb[key]<<" "<<cnt<<endl;
		// 	if(mpb[key] == cnt) continue;
		// 	else{
		// 		possible = false;
		// 		break;
		// 	}
		// }
		
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
