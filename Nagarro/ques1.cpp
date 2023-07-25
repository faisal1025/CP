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

int smartDict(int input1, string input2[]){
	int mnlen = INT_MAX;
	for(int i = 0; i < input1; i++){
		int sz = input2[i].length();
		mnlen = min(mnlen, sz);
	}
	int ans = 0;
	for(int i = 0; i < mnlen; i++){
		char ch = input2[0][i];
		bool flag = true;
		for(int j = 0; j < input1; j++){
			if(input2[j][i] != ch) flag = false;
		}
		if(flag == true) ans++;
		else break;
	}
	return ans;
}

void solve(){

	// Write your code here
	int input1;
	cin>>input1;

	string input2[input1];
	for(int i = 0; i < input1; i++) cin>>input2[i];

	cout<<smartDict(input1, input2);
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
