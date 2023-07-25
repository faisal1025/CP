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

		int size = s.length();

		bool possible = true;

		set<char> st;

		for(int i = 0; i < size; i++){
			st.insert(s[i]);
		}

		int d = st.size();

		set<char> distinct;
		for(int i = 0; i < d; i++){
			distinct.insert(s[i]);
		}

		if(distinct.size() < d){
			cout<<"NO\n";
			continue;
		}

		for(int i = d; i < size; i++){
			if(s[i] != s[i-d]){
				possible = false;
				break;
			}
		}
		if(possible) cout<<"YES\n";
		else cout<<"NO\n";
	}

	return 0;
}
