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
		string st;
		cin>>st;
		int pre = -1;
		int ans = 0;
		for(int i = 0; i < n; i++){
			if(st[i] == '0'){
				if(pre == -1){
					pre = i;
					continue;
				}
				if((i-pre)-1 <= 2){
					ans += 2-((i-pre)-1);
				}
				pre = i;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
	