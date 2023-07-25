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

int atm_currency(int input1){

	int d[4] = {2000, 500, 200, 100};

	int i = 0;
	int num = 0;
	while(i < 4){
		if(input1 >= d[i]){
			num += input1/d[i];
			input1 = input1%d[i];
		}
		i++;
	}
	return num;
}

void solve(){

	// Write your code here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		cout<<atm_currency(n)<<endl;
	}
	
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
