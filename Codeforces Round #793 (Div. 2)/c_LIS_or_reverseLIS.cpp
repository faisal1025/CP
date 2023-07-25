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

			for(int i = 0; i < n; i++){
				cin>>arr[i];
			}

			map<int, int> mp;

			for(int i = 0; i < n; i++){
				mp[arr[i]]++;
			} 
			int ans = n;
			for(auto it : mp){

				if(it.second > 2){
					int no = it.second-2;
					ans -= no;
				}
			}

			cout<<(ans+1)/2<<endl;
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
