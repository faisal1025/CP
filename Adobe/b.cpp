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

long marathon(long s, vector<long> checkpoint){
	long before = 0, after = 0;
	long n = checkpoint.size();
	for(int i = 0; i < n; i++){
		if(checkpoint[i] < s) before++;
		if(checkpoint[i] > s) after++;
	}
	cout<<before<<" "<<after<<endl;
	sort(checkpoint.begin(), checkpoint.end());

	if(before == n){
		return s-checkpoint[1];
	}
	else if(after == n){
		return checkpoint[n-2]-s;
	}
	else if(after != 0 and before != 0){
		
		long ans = 0;

		long b = s-checkpoint[0];
		long a = checkpoint[n-1]-s;

		if(b < a){
			ans += b;
			if(checkpoint[n-2] > s) ans += (checkpoint[n-2]-s);
		}else{
			ans += a;
			if(checkpoint[1] < s) ans += (s-checkpoint[1]);
		}

		return ans;
		

	}
	return 0;
}

void solve(){

	// Write your code here
	int s;
	cin>>s;
	int n;
	cin>>n;

	vector<long> ck;
	for(int i = 0; i < n; i++)
		cin>>ck[i];

	cout<<marathon(s, ck)<<"\n";

}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
