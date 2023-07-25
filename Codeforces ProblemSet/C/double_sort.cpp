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

		vector<int> ar(n);
		vector<int> br(n);

		for(int i = 0; i < n; i++)
			cin>>ar[i];

		for(int i = 0; i < n; i++)
			cin>>br[i];

		vector<int> a = ar;
		vector<int> b = br;

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		vector<vector<int>> steps;
		bool sorted = true;
		for(int i = 0; i < n; i++){
			if(a[i] != ar[i] or b[i] != br[i]){
				sorted = false;
				for(int j = i+1; j < n; j++){
					if(ar[j] == a[i] and br[j] == b[i]){
						swap(ar[j], ar[i]);
						swap(br[j], br[i]);
						steps.push_back({j+1, i+1});
						sorted = true;
					}
				}
				if(sorted == false) break;
			}

		}
		
		if(sorted){
			cout<<steps.size()<<endl;
			for(int i = 0; i < steps.size(); i++){
				cout<<steps[i][0]<<" "<<steps[i][1]<<"\n";
			}
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
