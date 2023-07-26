#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define mod 1000000007
#define f first
#define inf 1e9

int countMaximumOperations(string s, string t){
	int cnt[26] = {};
	int n = s.length();
	for(int i = 0; i < n; i++){
		cnt[s[i]-'a']++;
	}

	int m = t.length();
	int req[26] = {};
	for(int i = 0; i < m; i++){
		req[t[i]-'a']++;
	}
	int ans = n;
	for(int i = 0; i < 26; i++){
		if(req[i] == 0) continue;

		ans = min(ans, cnt[i]/req[i]);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s, t;
	cin>>s>>t;

	cout<<countMaximumOperations(s, t)<<endl;

	return 0;
}