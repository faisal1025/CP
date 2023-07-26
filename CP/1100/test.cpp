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
	
	string str = "abcbcccaadasdsdsdfsdasdaddfgfsdgsdfsdfesd";
	int arr[26] = {};
	int n  = str.length();
	for(int i = 0; i < n; i++){
		arr[str[i]-'a']++;
	}

	for(int i = 0; i < 26; i++){
		char temp = 'a'+i;
		cout<<temp<<" - "<<arr[i]<<"\n";
	}
	return 0;
}

// O(n+26)