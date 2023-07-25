#include<bits/stdc++.h>
#define ll long long

using namespace std;

const ll INF = 1e18;

int main(){

	// Write your code here
	int n;
	cin>>n;

	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin>>arr[i];

	ll mnStep = INF, step;
	for(int i = 0; i < n; i++){
		step = 0;
		ll mx = 0, mn = 0;
		for(int j = i-1; j >= 0; j--){
			if((arr[j]*-1) < mn){
				mn = arr[j]*-1;
				step++;
			}else{
				ll req = mn-1;
				ll mul = req / arr[j]*-1;
				if(req % (arr[j]*-1) != 0){mul += 1;}
				mn = (arr[j]*-1)*mul;
				step += mul;
			}
		}
		for(int j = i+1; j < n; j++){
			if(mx < arr[j]){
				mx = arr[j];
				step++;
			}else{
				ll req = mx+1;
				ll mul = req / arr[j];
				if(req % arr[j] != 0){mul += 1;}
				mx = arr[j]*mul;
				step += mul;
			}
		}
		
		mnStep = min(mnStep, step);
	}
	
	cout<<mnStep<<endl;
	return 0;
}
