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
			int ans = -1;
			for(int i = 0; i < n; i++){
				if(arr[i] == i) continue;
				else{
					if(ans == -1){
						ans = arr[i];
						continue;
					}
					ans = ans & arr[i];
				}
			}
			cout<<ans<<endl;
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
