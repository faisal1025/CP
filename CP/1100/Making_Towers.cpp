#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define mod 1000000007
#define f first
#define s second
#define inf 1e9

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		vector<int> arr(n);
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}

		vector<int> pre(n+1, -1);
		vector<int> ans(n+1, 0);

		for(int i = 0; i < n; i++){
			if(pre[arr[i]] == -1){
				pre[arr[i]] = i;
				ans[arr[i]] = 1;
			}else{
				if((i-pre[arr[i]]-1) % 2 == 0){
					ans[arr[i]] += 1;
				}
				pre[arr[i]] = i;
			}
		}

		for(int i = 1; i < n+1; i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}