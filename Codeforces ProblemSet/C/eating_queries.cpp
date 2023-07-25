#include<bits/stdc++.h>
#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

class Solution{
private:
	static bool comp(int a, int b){
		return a > b;
	}
public:
	void solve(){

		// Write your code here
		int t;
		cin>>t;

		while(t--){
			int n, q;
			cin>>n>>q;

			vector<int> arr(n);
			for(int i = 0; i < n; i++)
				cin>>arr[i];

			sort(arr.begin(), arr.end(), comp);

			vector<int> prefix(n+1, 0);
			for(int i = 1; i <= n; i++){
				prefix[i] = prefix[i-1] + arr[i-1];
			}

			while(q--){
				int sum;
				cin>>sum;
				auto x = lower_bound(prefix.begin()+1, prefix.end(), sum);
				int ans = -1;
				if(x != prefix.end()){
					ans = x-prefix.begin();
				}
				cout<<ans<<"\n";
			}


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
