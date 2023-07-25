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

		bool possible = true;

		if(arr[n-2] <= arr[n-1]){
			if(arr[n-1] < 0){
				for(int i = 1; i < n; i++){
					if(arr[i-1] > arr[i]){
						possible = false;
						break;
					}
				}
				if(possible)
					cout<<0<<endl;
			}else{
				cout<<n-2<<endl;
				for(int i = n-3; i >= 0; i--){
					cout<<i+1<<" "<<n-1<<" "<<n<<endl;
				}
			}
		}else{
			possible = false;
		}

		if(possible == false)
			cout<<-1<<endl;
	}
	

	return 0;
}
