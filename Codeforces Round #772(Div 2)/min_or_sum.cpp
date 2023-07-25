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

		int arr[n];
		for(int i = 0; i < n; i++) cin>>arr[i];

		sort(arr, arr+n);

		int sum = 0;
		for(int i = 0; i < n; i++){
			sum = (sum | arr[i]);
		}
		cout<<sum<<endl;
	}
	

	return 0;
}
