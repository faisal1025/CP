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

		vector<ll> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		sort(begin(arr), end(arr));

		vector<ll> pos;
		vector<ll> neg;
		ll ans = 0;
		for(int i = 0; i < n; i++){
			if(arr[i] > 0){
				pos.push_back(arr[i]);
			}else if(arr[i] < 0){
				neg.push_back(arr[i]);
			}
		}
		if(pos.empty() and neg.empty()){
			cout<<ans<<"\n";
			continue;
		}
		else if(neg.empty()){
			int num = pos.size();
			int rem = num % k;
			int gap = rem == 0 ? k : rem;
			for(int i = 0; i < num;){
				ans += (1ll*2*pos[(gap+i)-1]);
				i = gap+i;
				gap = k;
			}
			ans -= pos[pos.size()-1];
		}
		else if(pos.empty()){
			int num = neg.size();
			int rem = num % k;
			int gap = rem == 0 ? k : rem;
			for(int i = num-1; i >= 0;){
				ans += (1ll*2*(neg[(i-gap)+1]*-1));
				i = i-gap;
				gap = k;
			}
			ans -= (neg[0]*-1);
		}
		else if(pos.size() > 0 and neg.size() > 0){

			int num = neg.size();
			int rem = num % k;
			int gap = rem == 0 ? k : rem;
			for(int i = num-1; i >= 0;){
				ans += (1ll*2*(neg[(i-gap)+1]*-1));
				i = i-gap;
				gap = k;
			}

			num = pos.size();
			rem = num % k;
			gap = rem == 0 ? k : rem;
			for(int i = 0; i < pos.size();){
				ans += (1ll* 2*pos[(gap+i)-1]);
				i = gap+i;
				gap = k;
			}

			ans -= max(pos[num-1], (neg[0]*-1));
			
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
