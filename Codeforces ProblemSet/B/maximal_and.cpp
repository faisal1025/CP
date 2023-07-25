#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main(){

	// Write your code here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;

	while(t--){
		int n, k;
		cin>>n>>k;

		vector<int> nums(n);

		for(int i = 0; i < n; i++) cin>>nums[i];
 		
 		int ans = 0;
 		for(int j = 30; j >= 0; j--){
 			int cnt = 0;
 			for(int i = 0; i < n; i++){
 				if(nums[i] & (1 << j))
 					cnt++;
 			}
 			cnt = n - cnt;
 			if( k >= cnt) {ans += (1 << j); k -= cnt;}
 		}
 		
		cout<<ans<<endl;
	}
	

	return 0;
}
