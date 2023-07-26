#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<long long int, long long int>
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

		vector<ll> arr(n);
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}

		cout<<n<<endl;

		for(int i = 0; i < n; i++){
			ll num = 1;
			while(num < arr[i]){
				num *= 2;
			}
			cout<<i+1<<" "<<num-arr[i]<<endl;
		}
	}

	return 0;
}