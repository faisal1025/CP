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
	int input1;
	cin>>input1;

	vector<string> input2(input1);
	
	for(int i = 0; i < input1; i++){
		string s;
		cin>>s;
		input2[i] = s;
	}
	int mn_len = INT_MAX;
	for(int i = 0; i < input1; i++){
		int sz = input2[i].length();
		mn_len = min(mn_len, sz);
	}
	
	int ans = 0;
	for(int i = 0; i < mn_len; i++){
		char ch = input2[0][i];
		bool possible = true;
		for(int j = 0; j < input1; j++){
			if(input2[j][i] != ch) {possible = false; break;}
		}
		if(possible == true) ans++;
		else break;
	}

	cout<<ans<<"\n";

}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
