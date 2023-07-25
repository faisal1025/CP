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

bool removeAllOccurencess(vector<int> &arr, int remove, int n){
	int i = 0;
	int j = n-1;
	while(i <= j){
		if(arr[i] == remove){
			i++;
		}
		else if(arr[j] == remove){
			j--;
		}
		else if(arr[i] != arr[j]){
			return false;
		}
		else{
			i++; j--;
		}
	}
	return true;
}

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

		int i = 0;
		int j = n-1;

		bool kalindrome = true;
		while(i <= j){
			if(arr[i] == arr[j]){
				i++; j--;
			}else{
				if(removeAllOccurencess(arr, arr[i], n) == false and removeAllOccurencess(arr, arr[j], n) == false){
					kalindrome = false;
				}
				break;
			}
		}

		if(kalindrome) cout<<"YES\n";
		else cout<<"NO\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
