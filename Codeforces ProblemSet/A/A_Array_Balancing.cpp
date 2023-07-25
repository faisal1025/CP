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
		vector<int> a(n);
		vector<int> b(n);

		for(int i = 0; i < n; i++) cin>>a[i];
		for(int i = 0; i < n; i++) cin>>b[i];

		for(int i = 0; i < n; i++){
			if(a[i] < b[i]){
				swap(a[i], b[i]);
			}
		}

		ll ans = 0;
		for(int i = 1; i < n; i++){
			ans += abs(a[i]-a[i-1]);
			ans += abs(b[i]-b[i-1]);
		}
		cout<<ans<<"\n";
	}
	

	return 0;
}
