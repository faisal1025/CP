#include<bits/stdc++.h>
#define ll long long

using namespace std;

map<string, int> getDictionary(){
	map<string, int> ind;
	string temp = "aa";
	int i = 1;
	for(int f = 0; f < 26; f++){
		temp[0] = 'a'+f;
		for(int s = 0; s < 26; s++){
			temp[1] = 'a'+s;

			if(temp[0] == temp[1]) continue;

			ind[temp] = i++;
		}
	}
	return ind;
}

int main(){

	// Write your code here
	int t;
	cin>>t;

	map<string, int> ind = getDictionary();

	while(t--){
		string st;
		cin>>st;
		cout<<ind[st]<<endl;
	}
	

	return 0;
}
