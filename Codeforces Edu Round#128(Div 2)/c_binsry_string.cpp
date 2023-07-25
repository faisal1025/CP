#include<bits/stdc++.h>
#define ll long long

using namespace std;

int getCnt(int l, int u, int element, vector<vector<int>> &prefix){
	if(l == 0) return prefix[element][u];
	return prefix[element][u]-prefix[element][l-1];
}

int main(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		string st;
		cin>>st;

		int n = st.length();
		vector<vector<int>> prefix(2, vector<int> (n, 0));
		prefix[0][0] = (st[0] == '0');
		prefix[1][0] = (st[0] == '1');

		for(int i = 1; i < n; i++){
			prefix[0][i] = prefix[0][i-1]+(st[i] == '0');
			prefix[1][i] = prefix[1][i-1]+(st[i] == '1');
		}

		int ans = prefix[1][n-1];
		for(int i = 0; i < n; i++){
			int lb = 0, ub = i;
			while(lb < ub){
				int mb = (lb+ub) / 2;
				if(getCnt(mb, i, 0, prefix) > prefix[1][n-1]-getCnt(mb, i, 1, prefix)) lb = mb+1;
				else ub = mb;
			}
			ans = min(ans, max(getCnt(lb, i, 0, prefix), prefix[1][n-1]-getCnt(lb, i, 1, prefix)));
		}

		cout<<ans<<endl;
	}
	

	return 0;
}
