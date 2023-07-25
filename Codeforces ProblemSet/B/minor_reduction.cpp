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
		string s;
		cin>>s;

		int n = s.length();
		string temp = s;
		bool done = false;
		for(int i = n-2; i >= 0; i--){
			temp = s;
			int a = s[i]-'0';
			int b = s[i+1]-'0';
			int sum = a+b;
			if(sum >= 10){
				int d = sum%10;
				temp[i+1] = '0'+d;
				sum /= 10;
				temp[i] = '0'+sum;
				done = true;
				break;
			}
		}

		if(!done){
			int a = s[0]-'0';
			int b = s[1]-'0';
			int sum = a+b;
			temp[1] = '0'+sum;
			temp = temp.substr(1);
			done = true;
		}

		cout<<temp<<"\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
