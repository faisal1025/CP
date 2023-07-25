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

const int N = 1e6+1;
vector<ll> prime(N, 1);

void sieve(){
	
	prime[0] = 0;
	prime[1] = 0;

	for(int i = 2; i*i <= N; i++){

		if(prime[i] == 1){
			for(int j = i*i; j <= N; j += i){
				prime[j] = 0;

			}
		}
	}
}

void solve(){

	// Write your code here
	int t;
	cin>>t;
	
	
	sieve();

	
	
	while(t--){
		ll n, e;
		cin>>n>>e;

		vector<ll> arr(n);
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}

		ll cnt = 0;
		vector<vector<ll>> one(n, vector<ll> (2, 0));
		for(int i = 0; i < n; i++){
			if(arr[i] == 1) {
				one[i][0] = 1;
				one[i][1] = 1;
			}
		}

		for(int i = e; i < n; i++){
			if(arr[i] == 1 and prime[arr[i-e]] == 0){
				one[i][0] += one[i-e][0];
			}
			else if(prime[arr[i]] and prime[arr[i-e]] == 0){
				one[i][0] += one[i-e][0];
			}
		}

		for(int i = (n-e)-1; i >= 0; i--){
			if(arr[i] == 1 and prime[arr[i+e]] == 0){
				one[i][1] += one[i+e][1];
			}
			else if(prime[arr[i]] and prime[arr[i+e]] == 0){
				one[i][1] += one[i+e][1];
			}
		}
		
		for(int i = 0; i < n; i++){
			if(prime[arr[i]]){
				cnt += one[i][0]+one[i][1]+(one[i][0]*one[i][1]);
			}
		}
		cout<<cnt<<"\n";
	}
	
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
