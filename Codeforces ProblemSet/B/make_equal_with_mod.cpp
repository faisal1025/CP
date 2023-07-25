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

		sort(arr.begin(), arr.end());

		int is0 = 0, is1 = 0;

		for(int i = 0; i < n; i++){
			if(arr[i] == 0){
				is0 = 1;
			}else if(arr[i] == 1){
				is1 = 1;
			}
		}

		if(is0 and is1) cout<<"NO\n";
		else if(is1) {
			bool possible = true;
			for(int i = 0; i < n-1; i++){
				if(arr[i]+1 == arr[i+1]){
					possible = false;
					break;
				}
			}
			if(possible) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
		}	
	}
	

	return 0;
}
