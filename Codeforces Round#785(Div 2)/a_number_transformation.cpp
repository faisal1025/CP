#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int x, y;
		cin>>x>>y;

		if(y % x != 0){
			cout<<0<<" "<<0<<endl;
		}else{
			int b = y / x;
			cout<<1<<" "<<b<<endl;
		}
	}
	
	return 0;
}
