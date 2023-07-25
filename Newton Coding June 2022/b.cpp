#include <bits/stdc++.h> // header file includes every Standard library
#define ll long long int
using namespace std;

int main() {

	// Your code here
	ll n, k;
	cin>>n>>k;

	vector<ll> arr(n);
	for(int i = 0; i < n; i++)
		cin>>arr[i];

	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}

	ll curr_sum = 0, ans = sum;
	ll sz = 0, ele;
	for(int i = 0; i < n; i++){
		curr_sum = 0; sz = 0;
		for(int j = i; j < n; j++){
			curr_sum  += arr[j];
			sz++;
			ans = max(ans, (sum-curr_sum)+(k*sz));
		}
	}

	cout<<ans<<endl;

	return 0;

}