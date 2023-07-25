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

int noOfCombination(int a, int b, int c){
	if(c == 0) return 0;

	int ans = 0;
	if(a > b){
		ans += c/2;
		ans += c % 2 == 0 ? 0 : 1;
		int f = c/2;
		int s = c-f;
		while(a+f > b+s){
			ans++;
			f--;
			s++;
		}
	}else{
		int diff = b-a;
		if(diff >= c) return 0;
		int rem = c-diff;
		ans += rem/2;
		ans += rem % 2 == 0 ? 0 : 1;
	}
	return ans;
}

void solve(){

	// Write your code here
	int a, b, c;
	cin>>a>>b>>c;

	cout<<noOfCombination(a, b, c);
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
