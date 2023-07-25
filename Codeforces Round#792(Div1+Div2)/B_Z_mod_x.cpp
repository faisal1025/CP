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
			ll a, b, c;
			cin>>a>>b>>c;

			ll x, y, z;

			z = c;
			y = c+b;
			x = c+b+a;
			cout<<x<<" "<<y<<" "<<z<<"\n";
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
