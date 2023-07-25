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


ll to_integer(string &ans){
	ll r = 0;
	for(int i = 0; i < ans.length(); i++){
		r = (r*10)+(ans[i]-'0');
	}
	return r;
}

void solve(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		ll num, sum;
		cin>>num>>sum;

		string a, s;
		a = to_string(num);
		s = to_string(sum);
		
		string ans = "";
		int n = a.length();
		int l = s.length();
		
		bool possible = true;
		int j = l-1;
		for(int i = n-1; i >= 0; i--){
			if(j < i){
				possible = false;
				break;
			}
			int dig1 = a[i]-'0';
			int res = s[j--]-'0';
			
			if(res >= dig1){
				int dig2 = res-dig1;
				ans += ('0'+dig2);
			}else{

				res = (s[j--]-'0')*10+res;
				if(res >= 20 || res < dig1){
					possible = false;
					break;
				}
				int dig2 = res-dig1;
				ans += ('0'+dig2);
			}
			
		}
		
		while(j >= 0){
			ans += s[j--];
		}
		if(possible){
			reverse(begin(ans), end(ans));
			ll r = to_integer(ans);
			cout<<r<<"\n";
		}else{
			cout<<-1<<"\n";
		}
		
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
