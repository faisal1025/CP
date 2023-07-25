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

		bool possible = true;

		// trivial case
		if(n == 1){
			if(st[0] != 'W'){
				possible = false;
			}
			n = 0;
		}

		int len = 0, red = 0, blue = 0;
		for(int i = 0; i < n; i++){
			if(st[i] == 'R'){
				len++;
				red = 1;
			}
			else if(st[i] == 'B'){
				len++;
				blue = 1;
			}
			else{
				if(len == 1){
					possible = false;
					break;
				}
				else if(len > 1){
					if(blue == 0 || red == 0){
						possible = false;
						break;
					}
				}
				blue = red = len = 0;
			}
		}

		if(len == 1){
			possible = false;
		}
		else if(len > 1){
			if(blue == 0 || red == 0){
				possible = false;
			}
		}
		blue = red = len = 0;

		if(possible) cout<<"YES\n";
		else cout<<"NO\n";
	}
	

	return 0;
}

