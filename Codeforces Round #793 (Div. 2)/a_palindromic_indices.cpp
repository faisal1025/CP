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

			string s;
			cin>>s;

			int mid = n/2;

			int i = mid+1;
			int j = mid-1;
			int ans = 1;
			while(i < n and s[i] == s[mid]){
				ans++;
				i++;
			}
			while(j >= 0 and s[j] == s[mid]){
				ans++;
				j--;
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
