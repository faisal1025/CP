#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int x = 32768;

int mostPowerOf2(int temp){
	int numOf2 = 0;
	while(temp%2 == 0){
		temp /= 2;
		numOf2++;
	}
	return numOf2;
}

int main(){

	// Write your code here
	int n;
	cin>>n;

	for(int t = 0; t < n; t++){
		int a;
		cin>>a;
		if(a == 0){
			cout<<0<<endl;
			continue;
		}

		int ans = 15;
		for(int i = 0; i <= 15; i++){
			int temp = a+i;
			if(temp > x) break;
			int num = mostPowerOf2(temp);
			ans = min(ans, (15-num)+i);
		}
		cout<<ans<<"\n";		
	}
	

	return 0;
}
