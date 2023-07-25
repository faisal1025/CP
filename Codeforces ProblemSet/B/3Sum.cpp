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

		vector<int> arr(n);
		for(int i = 0; i < n; i++)
			cin>>arr[i];

		vector<int> count(10, 0);
		for(int i = 0; i < n; i++){
			count[arr[i]%10]++;
		}

		bool present = false;
		for(int i = 0; i < 10; i++){
			if(present) break;
			for(int j = 0; j < 10; j++){
				if(present) break;
				for(int z = 0; z < 10; z++){
					if((i+j+z)%10 == 3){
						if(i == j and j == z and i == z){
							if(count[i] > 2){
								present = true;
								break;
							}
						}
						else if(i == j and j != z){
							if(count[i] > 1 and count[z] > 0){
								present = true;
								break;
							}
						}
						else if(i != j and j == z){
							if(count[j] > 1 and count[i] > 0){
								present = true;
								break;
							}

						}
						else if(i == z and j != z){
							if(count[i] > 1 and count[j] > 0){
								present = true;
								break;
							}

						}
						else if(i != j and j != z and i != z){
							if(count[i] > 0 and count[j] > 0 and count[z] > 0){
								present = true;
								break;
							}
						}
					}
				}
			}
		}

		if(present){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}

	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
