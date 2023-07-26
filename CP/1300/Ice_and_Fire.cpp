#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define mod 1000000007
#define f first
#define s second
#define inf 1e9

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		string s;
		cin>>s;

		vector<int> ans(n-1);
		ans[0] = 1;
		for(int i = 1; i < n-1; i++){
			if(s[i] == s[i-1]){
				ans[i] = ans[i-1];
			}else{
				ans[i] = i+1;
			}
		}

		for(int i = 0; i < n-1; i++){
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}