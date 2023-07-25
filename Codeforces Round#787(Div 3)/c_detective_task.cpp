#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		string s;
		cin>>s;
		int len = s.length();

		if(len == 1){
			cout<<1<<endl;
			continue;
		}

		int present1 = -1, present0 = -1;
		for(int i = 0; i < len; i++){
			if(s[i] == '1'){
				present1 = i;
			}
		}
		for(int i = len-1; i >= 0; i--){
			if(s[i] == '0'){
				present0 = i;
			}
		}

		if(present0 != -1 and present1 != -1)
			cout<<(present0-present1)+1<<"\n";
		else if(present0 != -1){
			cout<<present0+1<<"\n";
		}
		else if(present1 != -1){
			cout<<(len-present1)<<"\n";
		}else{
			cout<<len<<"\n";
		}
	}
	

	return 0;
}
