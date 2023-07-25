#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		string st;
		cin>>st;
		string ans = st;
		reverse(ans.begin(), ans.end());
		st += ans;
		cout<<st<<endl;
	}
}