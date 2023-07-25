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

int is_perfect(int input1){
	int s = 1;
	for(int i = 2; i * i <= input1; i++){
		if(input1%i == 0){
			s += i;
			int j = input1/i;
			if(j != i)
				s += j;
		}
	}
	if(s == input1)
		return 1;
	else
		return 0;
}

void solve(){

	// Write your code here
	int n;
	cin>>n;

	cout<<is_perfect(n)<<endl;
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
