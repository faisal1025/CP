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


void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}


void solve(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int n, a, b;
		cin>>n>>a>>b;

		if(n-2 < a+b){
			cout<<-1<<endl;
			continue;
		}

		vector<int> ans(n);
		for(int i = 0; i < n; i++){
			ans[i] = i+1;
		}
		
		if(abs(a-b) <= 1){
			if(a > b){
				for(int i = n-1; i >= n-2*a; i -= 2){
					swap(ans[i-1], ans[i]);
				}
			}
			else if(a < b){
				for(int i = 1; i < 2*b; i += 2){
					swap(ans[i-1], ans[i]);
				}
			}
			else if(a == b and a != 0){
				for(int i = 1; i < 2*b; i += 2){
					swap(ans[i-1], ans[i]);
				}
				swap(ans[n-1], ans[n-2]);
			}
			for(int i = 0; i < n; i++){
				cout<<ans[i]<<" ";
			}
			cout<<"\n";
		}else{
			cout<<-1<<"\n";
		}
	}
	
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
