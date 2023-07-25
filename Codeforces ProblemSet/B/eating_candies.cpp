#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n; // number of candies

		int weight[n];
		for(int i = 0; i < n; i++) cin>>weight[i];

		int left = -1, right = n, alice = 0, bob = 0;

		int ans = 0, cnt = 0;

		while(left < right){
			if(alice < bob){
				left++;
				alice += weight[left]; // 7 3 20 
				cnt++;
			}
			else if(bob < alice){
				right--;
				bob += weight[right]; // 10
				cnt++;
			}
			else{
				ans += cnt; // 3
				left++;
				alice += weight[left]; // if (alice == bob) any one can eat
				cnt = 1;
			}
		}

		cout<<ans<<endl;

	}
	

	return 0;
}
