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

		vector<int> arr(n);
		for(int i = 0; i < n; i++) cin>>arr[i];

		if(n == 1){cout<<0<<"\n"; continue;}

		if(arr[n-1] == 0) {
			cout<<-1<<"\n";
			continue;
		}

		int ans = 0;
		for(int i = n-2; i >= 0; i--){
			if(arr[i] < arr[i+1]) continue;
			else{
				if(arr[i+1] == 0){
					ans = -1;
					break;
				}
				int ope = 0;
				while(arr[i] >= arr[i+1]){
					arr[i] = arr[i]/2;
					ope++;
				}
				ans += ope;
			}
		}
		cout<<ans<<"\n";
	}
	

	return 0;
}
