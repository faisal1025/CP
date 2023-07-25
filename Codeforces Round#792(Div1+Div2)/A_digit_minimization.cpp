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

			vector<int> dig;
			int num = n;
			int mn = INT_MAX;

			while(num != 0){
				int d = num%10;
				mn = min(mn, d);
				dig.push_back(d);
				num /= 10;
			}
			reverse(begin(dig), end(dig));
			int sz = dig.size();
			if(sz == 2){
				mn = dig[1];
			}
			cout<<mn<<"\n";
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
