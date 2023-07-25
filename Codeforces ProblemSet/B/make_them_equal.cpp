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
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
		char c;
		cin>>c;

		string s;
		cin>>s;

		bool required = false;
		for(int i = 0; i < n; i++){
			if(s[i] != c){
				required = true;
				break;
			}
		}
		if(!required){
			cout<<0<<endl;
			continue;
		}

		
		bool valid = false;
		for(int i = 1; i < n; i ++){
			if(s[i] == c){
				valid = true;
				for(int j = i; j < n; j += i+1){
					if(s[j] != c){
						valid = false;
						break;
					}
				}
				if(valid){
					cout<<1<<endl;
					cout<<i+1<<endl;
					break;
				}
			}
		}
		if(valid == false){
			cout<<2<<endl;
			cout<<n<<" "<<n-1<<endl;
		}
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}

