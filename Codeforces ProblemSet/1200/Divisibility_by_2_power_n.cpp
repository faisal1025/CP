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

int noOfTwos(int x){
	int c = 0;
	while(x % 2 == 0){
		c++;
		x /= 2;
	}
	return c;
}

int noOfOperation(vector<int> &arr, int n){
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cnt += noOfTwos(arr[i]);
	}
	if(cnt >= n) return 0;
	int op = 0;
	vector<int> twos(n+1, 0);
	for(int i = n; i >= 1; i--){
		int c = noOfTwos(i);
		twos[i] = c;
	}
	sort(twos.begin(), twos.end());
	for(int i = n; i >= 1; i--){
		cnt += twos[i];
		op++;
		if(cnt >= n) return op;
	}
	return -1;
}

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

		cout<<noOfOperation(arr, n)<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
