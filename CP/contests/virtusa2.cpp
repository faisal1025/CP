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
	
	string s;
	cin>>s;

	int ns = 0, ew = 0;
	int n = s.length();
	for(int i = 0; i < n; i++){
		if(s[i] == 'N'){
			ns++;
		}else if(s[i] == 'S'){
			ns--;
		}else if(s[i] == 'E'){
			ew--;
		}else{
			ew++;
		}
	}
	string result = "";
	while(ew < 0){
		result.push_back('E');
		ew++;
	}
	while(ns > 0){
		result.push_back('N');
		ns--;
	}
	while(ns < 0){
		result.push_back('S');
		ns++;
	}
	while(ew > 0){
		result.push_back('W');
		ew--;
	}
	
	cout<<result<<"\n";

	return 0;
}