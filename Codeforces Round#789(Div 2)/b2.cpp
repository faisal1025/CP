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
		string backup = s;
		int ans = 0, cnt = 0;
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

		int subseqments = 0;
		char previous = '\0';

		for(int i = 0; i < n; i += 2){
			if(backup[i] == backup[i+1]){
				if(previous != backup[i]){
					subseqments += 1;
					previous = backup[i];
				}
			}
		}

		if(subseqments == 0) subseqments++;
		
		cout<<ans<<" "<<subseqments<<"\n";

	}
	

	return 0;
}
