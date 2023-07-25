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

int kthnumber(int input1, int input2[], int input3){
	unordered_map<int, int> ump;
	for(int i = 0; i < input1; i++){
		ump[input2[i]] = 1;
	}

	for(int i = )
}

void solve(){

	// Write your code here
	int input1;
	cin>>input1;
	int input2[input1];
	for(int i = 0; i < input1; i++){
		cin>>input2[i];
	}
	int input3;
	cin>>input3;

	cout<<kthnumber(input1, input2, input3);
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
