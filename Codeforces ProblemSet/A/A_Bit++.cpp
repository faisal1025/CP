#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int n;
	cin>>n;
	int x = 0;
	while(n--){
		char st[3];
		for(int i = 0; i < 3; i++) cin>>st[i];
		if(st[1] == '+'){
			x++;
		}else{
			x--;
		}
	}
	
	cout<<x<<endl;

	return 0;
}
