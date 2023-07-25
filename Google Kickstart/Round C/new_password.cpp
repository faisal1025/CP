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

		for(int tst = 1; tst <= t; tst++){
			int n;
			cin>>n;

			string old;
			cin>>old;
			bool cap, small, dig, special;
			cap = small = dig = special = false;
			for(int i = 0; i < n; i++){
				if(old[i] >= 'A' and old[i] <= 'Z'){
					cap = true;
				}
				else if(old[i] >= 'a' and old[i] <= 'z'){
					small = true;
				}
				else if(old[i] >= '0' and old[i] <= '9'){
					dig = true;
				}
				else if(old[i] == '&' || old[i] == '*' || old[i] == '@' || old[i] == '#'){
					special = true;
				}
			}

			if(special == false){
				old += '&';
			}
			if(dig == false){
				old += '1';
			}
			if(small == false){
				old += 'a';
			}
			if(cap == false){
				old += 'A';
			}
			int sz = old.length();
			if(sz < 7){
				int rem = 7 - sz;
				for(int i = 1; i <= rem; i++){
					old += 'a';
				}
			}
			cout<<"Case #"<<tst<<": "<<old<<"\n";
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
