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
		int mx = 0, st = 0;
		if(n % 2 != 0){
			mx = arr[st];
			st++;
		}
		bool ispossible = true;
		for(int i = st; i < n; i += 2){
			if(arr[i] >= mx and arr[i+1] >= mx){
				mx =  max(arr[i], arr[i+1]);
			}else{
				ispossible = false;
			}
		}
		if(ispossible) cout<<"YES\n";
		else cout<<"NO\n";
	}
	

	return 0;
}

