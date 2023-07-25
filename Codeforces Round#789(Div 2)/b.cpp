#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		string s;
		cin>>s;

		int even = 0, odd = 0, ans = 0, cnt = 0;
		int i = 1;
		while(i < n){
			cnt = 1;
			while(i < n and s[i-1] == s[i]){
				cnt++;
				i++;
			}
			if(cnt % 2 != 0) {
				s[i] = s[i-1];
				ans += 1;
				i += 2;
			}else{
				i += 1;
			}

		}

		cout<<ans<<"\n";

	}
	

	return 0;
}
