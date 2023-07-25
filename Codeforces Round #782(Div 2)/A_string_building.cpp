#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;
	while(t--){
		string st;
		cin>>st;
		st.push_back(' ');

		int n = st.length();
		char ch = '\0';
		bool possible = true;
		for(int i = 0; i < n-1; i++){
			if(st[i] == ch) continue;
			if(st[i] == st[i+1]){
				ch = st[i];
			}else{
				possible = false;
				break;
			}
		}
		if(possible){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
	

	return 0;
}
