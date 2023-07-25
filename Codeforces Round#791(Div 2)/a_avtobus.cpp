#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	ll t;
	cin>>t;

	while(t--){
		ll n;
		cin>>n;
		if(n == 1 || n == 2 || n == 3){
			cout<<-1<<endl;
			continue;
		}

		ll mx, mn;
		if(n % 2 == 0){
			if(n % 6 == 0){
				mx = n/4;
				mn = n/6; 
			}
			else if(n % 4 == 0){
				mx = n/4;
				mn = (n/6)+1;
			}
			else{
				mx = ((n-6)/4)+1;
				mn = ((n-8)/6)+2;
			}
			cout<<mn<<" "<<mx<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	
	return 0;
}
