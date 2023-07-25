#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<int> arr(n);
		for(int i = 0; i < n; i++) cin>>arr[i];

		bool ans = false;
		map<int, int> present;
		for(int i = 0; i < n; i++) present[arr[i]] = 1;
		for(int i = 0; i < n; i++){
			if(present[arr[i]+k]){
				ans = true;
				break;
			}
		}
		if(ans == true) cout<<"YES\n";
		else cout<<"NO\n";
	}
	

	return 0;
}

