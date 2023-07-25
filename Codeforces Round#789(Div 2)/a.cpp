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

		map<int, int> mp;
		for(int i = 0; i < n; i++) {
			cin>>arr[i];
			mp[arr[i]]++;
		}

		if(mp[0] > 0){
			cout<<n-mp[0]<<endl;
		}
		else{
			bool istrue = false;
			for(auto it : mp){
				if(it.second >= 2){
					istrue = true;
				}
			}
			if(istrue) cout<<n<<endl;
			else cout<<n+1<<endl;
		}

	}
	

	return 0;
}

