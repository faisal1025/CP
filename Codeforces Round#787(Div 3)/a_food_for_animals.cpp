#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int a, b, c, x, y;
		cin>>a>>b>>c>>x>>y;

		int dog = 0, cat = 0;
		if(a >= x){
			dog = 1;
		}else{
			int xleft = x-a;
			if(c >= xleft){
				c = c-xleft;
				dog = 1;
			}
		}

		if(b >= y){
			cat = 1;
		}else{
			int yleft = y-b;
			if(c >= yleft){
				c = c-yleft;
				cat = 1;
			}
		}

		if(dog and cat) cout<<"YES\n";
		else cout<<"NO\n";

	}
	

	return 0;
}

