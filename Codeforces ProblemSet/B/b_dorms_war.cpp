#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		string s;
		cin>>s;

		int k;
		cin>>k;

		int mp[26] = {0};
		for(int i = 0; i < k; i++){
			char ch;
			cin>>ch;
			mp[ch-'a'] = 1;
		}

		int maxCnt = 0, cnt = 0;
		for(int i = 0; i < n; i++){
			if(mp[s[i]-'a'] == 1){
				maxCnt = max(maxCnt, cnt);
				cnt = 0;
			}
			cnt++;
		}
		cout<<maxCnt<<"\n";
	}
	

	return 0;
}
