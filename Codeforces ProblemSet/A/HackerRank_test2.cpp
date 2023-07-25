#include<bits/stdc++.h>
#define ll long long

using namespace std;

int getUniqueCharacter(string st){
	map<char, int> mp;
	for(int i = 0; i < st.length(); i++){
		mp[st[i]]++;
	}
	for (int i = 0; i < st.length(); ++i)
	{
		if(mp[st[i]] == 1){
			return i+1;
		}
	}
	return -1;
}

int main(){

	// Write your code here
	string st;
	cin>>st;
	cout<<getUniqueCharacter(st)<<endl;
	

	return 0;
}
