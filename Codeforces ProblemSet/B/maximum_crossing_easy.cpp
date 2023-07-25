#include<bits/stdc++.h>
#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

class Solution{
public:
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

			map<int, int> mp;
			int cnt = 0;
			for(int i = 0; i < n; i++){
				auto it = mp.lower_bound(arr[i]);

				if(it != mp.end()){
					while(it != mp.end()){
						cnt += (*it).second;
						it++;
					}
				}
				mp[arr[i]]++;
			}

			cout<<cnt<<"\n";
		}
	}	
};

int main(){
	
	// for fast io
	FAST_IO

	Solution obj;
	obj.solve();
	

	return 0;
}
