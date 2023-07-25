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

int arrGcd(vector<int> &arr, int n){
	int gcd = arr[1];
	for(int i = 1; i <= n; i++){
		gcd = __gcd(gcd, arr[i]);
	}
	return gcd;
}

int minOperation(vector<int> &arr, int n){
	int gcd = arrGcd(arr, n);
	if(gcd == 1) return 0;

	vector<int> temp = arr;
	int minCost = INT_MAX;
	for(int i = n; i >= 1; i--){
	    //cout<<i<<endl;
		temp = arr;
		int cost = 0;
		for(int j = i; j >= 1; j--){
			temp[j] = __gcd(j, temp[j]);
			//cout<<"j and temp[j]"<<j<<" "<<temp[j]<<endl;
			cost += n-j+1;
			if(arrGcd(temp, n) == 1){
			    //cout<<"j - "<<j<<endl;
				minCost = min(cost, minCost);
				break;
			}
		}
	}
	return minCost;
}

void solve(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		vector<int> arr(n+1);
		for(int i = 1; i <= n; i++){
			cin>>arr[i];
		}

		cout<<minOperation(arr, n)<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}