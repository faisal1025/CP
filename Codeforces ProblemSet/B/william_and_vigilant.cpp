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
	int n, q;
	cin>>n>>q;

	string s;
	cin>>s;

	int cnt = 0;
	for(int i = 0; i < n-2; i++){
		if(s[i] == 'a' and s[i+1] == 'b' and s[i+2] == 'c')
			cnt++;	
	}

	for(int query = 0; query < q; query++){
		int i;
		cin>>i;
		char ch;
		cin>>ch;

		if(s[i-1] == ch){
			cout<<cnt<<"\n";
			continue;
		}

		if(i-1 >= 0 and s[i-1] == 'c' and i-2 >= 0 and s[i-2] == 'b' and i-3 >= 0 and s[i-3] == 'a'){
			cnt--;
		}
		else if (i-1 >= 0 and s[i-1] == 'b' and i-2 >= 0 and s[i-2] == 'a' and i < n and s[i] == 'c'){
			cnt--;
		}
		else if (i-1 >= 0 and s[i-1] == 'a' and i < n and s[i] == 'b' and i+1 < n and s[i+1] == 'c'){
			cnt--;
		}

		s[i-1] = ch;

		if(i-1 >= 0 and s[i-1] == 'c' and i-2 >= 0 and s[i-2] == 'b' and i-3 >= 0 and s[i-3] == 'a'){
			cnt++;
		}
		else if (i-1 >= 0 and s[i-1] == 'b' and i-2 >= 0 and s[i-2] == 'a' and i < n and s[i] == 'c'){
			cnt++;
		}
		else if (i-1 >= 0 and s[i-1] == 'a' and i < n and s[i] == 'b' and i+1 < n and s[i+1] == 'c'){
			cnt++;
		}

		cout<<cnt<<"\n";		
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
