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
		string seq;
		cin>>seq;

		int i = 0;
		int times = 0, st, rem = 0;
		while(i < n){
			st = i;
			if(seq[i] == ')'){
				i++;
				while(i < n and seq[i] != ')'){
					i++;
				}
				if(i == n) {
					rem = n-st;
					break;
				}
				i++;
			}
			else{
				i += 2;
				if(i == n){times++; break;}
				if(i > n) {rem = 1; break;}
			}
			
			times++;
		}
		cout<<times<<" "<<rem<<"\n";
	}
	

	return 0;
}
