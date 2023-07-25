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

		if(n <= 2){
			cout<<0<<endl;
			for(int i = 0; i < n; i++){cout<<arr[i]<<" ";}
			cout<<"\n";
			continue;
		}

		vector<int> pri(n, 0);

		int i = 0, j = 2, cnt = 0;
		while(i < n and j < n){
			if(arr[i] < arr[i+1] and arr[j-1] > arr[j]){
				if(pri[i] == 1){
					arr[i] = arr[i+1];
				}else{
					arr[j] = arr[j-1];
					pri[j] = 1;
					cnt++;
				}
				i += 2;
				j += 2;
			}else{
				i += 1;
				j += 1;
			}
		}

		cout<<cnt<<endl;
		for(int i = 0; i < n; i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	

	return 0;
}
