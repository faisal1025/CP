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

		vector<int> vec(n);

		for (int i = 0; i < n; ++i)
		{
			cin>>vec[i];
		}

		unordered_map<int, int> ump;
		for(int i = 0; i < n; i++){
			ump[vec[i]]++;
		}

		if(ump.size() == 1 and ump[0] > 0){
			cout<<"Yes\n"; 
			continue;
		}

		int pos = 0, neg = 0;
		for(int i = 0; i < n; i++){
			if(vec[i] > 0) pos++;
			else if(vec[i] < 0) neg++;
		}

		if(pos > 2 || neg > 2){
			cout<<"No\n";
			continue;
		}

		vector<int> arr;
		for(auto it : ump){
			if(it.first == 0){
				arr.push_back(it.first);
			}
			else if(it.first != 0){
				for(int i  = 0; i < it.second; i++){
					arr.push_back(it.first);
				}
			}
		}

		bool possible = true;

		for(int i = 0; i < arr.size(); i++){
			if(possible == false) break;
			for(int j = i+1; j < arr.size(); j++){
				if(possible == false) break;
				for(int k = j+1; k < arr.size(); k++){
					ll s = arr[i]+arr[j]+arr[k];
					if(ump[s] == 0){
						possible = false;
						break;
					}
				}
			}
		}

		if(possible) cout<<"Yes\n";
		else cout<<"No\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
	