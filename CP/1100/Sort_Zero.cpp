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

		set<int> s;
		int flag = 0;
		
		for(int i = n-2; i >= 0; i--){
			if(arr[i] > arr[i+1]){
				flag = 1;
			}

			if(flag == 1){
				s.insert(arr[i]);
			}
		}

		if(s.empty()){
			cout<<0<<endl;
			continue;
		}

		flag = 0;
		for(int i = n-1; i >= 0; i--){
			if(s.count(arr[i]) == 1){
				flag = 1;
			}

			if(flag == 1){
				s.insert(arr[i]);
			}
		}

		cout<<s.size()<<endl;
		
	}

	return 0;
}