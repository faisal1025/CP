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
			int n, k;
			cin>>n>>k;
			string s;
			cin>>s;

			vector<char> arr;
			map<char, char> mp;
			
			arr.push_back('a');
			mp['a'] = 'a';

			// for s[i] whole string
			for(int i = 0; i < n; i++){
				auto it = lower_bound(arr.begin(), arr.end(), s[i]);

				if(it == arr.end()){
					// if any larget char not available in array arr the current char 
					//it self is larger
					if(k > 0){
						// if operation available
						int req = s[i] - arr[arr.size()-1];
						if(req <= k){
							k -= req;
							mp[s[i]] = mp[arr[arr.size()-1]];
						}else{
							int get = s[i]-k;
							char charget = get;
							mp[s[i]] = charget;
							k = 0;
						}
						arr.push_back(s[i]);
					}else{
						// if operation doesn't available
						mp[s[i]] = s[i];
					}
				}else{
					// if a larger char available in arr 
					int ind = it-arr.begin();
					if(s[i] > mp[arr[ind]]) // if smaller current char travel alog with the larger to reach same point
						mp[s[i]] = mp[arr[ind]];
					else 					// if smaller char is more smaller than the destination char
						mp[s[i]] = s[i];
				}
			}

			string ans = "";
			for(int i = 0; i < n; i++){
				ans += mp[s[i]];
			}
			cout<<ans<<"\n";
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
