#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int mod = 1e9+7;

vector<ll> getPalin(int n){
	vector<ll> ans(n+1);
	ans[0] = 1;
	int ind = 0;
	for(int i = 1; i <= n; i++){
		string num = to_string(i);
		string rev = num;
		reverse(rev.begin(), rev.end());
		if(rev == num){
			for(int j = 1; j <= n; j++){
				if(i > j) continue;
				ans[j] = ((ans[j]%mod) + (ans[j-i]%mod))%mod;
			}
		}
	}

	return ans;
}

int main(){

	// Write your code here
	ll t;
	cin>>t;

	int total = 4*1e4;
	vector<ll> ans = getPalin(total);

	while(t--){
		ll n;
		cin>>n;
		cout<<(ans[n]%mod)<<endl;
	}
	
	return 0;
}
