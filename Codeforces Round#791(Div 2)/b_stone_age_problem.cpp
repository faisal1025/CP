#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	
		int n, q;
		cin>>n>>q;

		vector<ll> arr(n);
		for(int i = 0; i < n; i++) cin>>arr[i];

		ll sum = 0;
		for(int i = 0; i < n; i++) sum += arr[i];
    	
    	vector<int> firstRank(n, 1);
    	int lastind = 0;
    	int secondRank = 0;
    	int secondVal = 0;
		for(int i = 0; i < q; i++) {
		  	ll type, j, x;
			cin>>type;
			if(type == 1){
			  	cin>>j>>x;
			  	if(secondRank > firstRank[j-1]){
			  		arr[j-1] = secondVal;
			  		firstRank[j-1] = secondRank+1;
			  	}
				sum -= arr[j-1];
				arr[j-1] = x;
				sum += arr[j-1];
				lastind = j-1;
			}			
			else if(type == 2){
			  	cin>>x;
				sum = n*x;
				secondRank = firstRank[lastind]+1;
				secondVal = x;
			}
			cout<<sum<<endl;
		}
	
	

	return 0;
}