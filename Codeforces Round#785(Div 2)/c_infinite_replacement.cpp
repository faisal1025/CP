#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int mod = 1e9+7;

int main(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		string s;
		string q;
		cin>>s>>q;

		ll m = q.length();

		if(m == 1 and q[0] == 'a'){
			cout<<1<<"\n";
			continue;
		}
		else{
			bool present = false;

			for(int i = 0; i < m; i++){
				if(q[i] == 'a'){
					present = true;
					break;
				}
			}

			if(present) {
				cout<<-1<<"\n";
				continue;
			}

			ll n = s.length();

			ll ans = pow(2, n);

			cout<<ans<<"\n";
		}
	}
	

	return 0;
}
