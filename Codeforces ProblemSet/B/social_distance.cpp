#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;

	cin>>t;

	while(t--){
		int n, m;
		cin>>n>>m;

		int arr[n];
		for(int i = 0; i < n; i++) cin>>arr[i];

		bool possible = true;
		int i = 0;
		int chair = 1;

		if(m < n){
			possible = false;
			n = 0;
		}

		sort(arr, arr+n);

		i++; // putting at i = 0
		n--; // sitting first person

		while(n > 0){
			int reqSeat = arr[i]*2 + 1;
			int avilableSeat = (m-chair);
			if(avilableSeat < reqSeat){
				possible = false;
				break;
			}else{
				chair += arr[i] + 1;
				n--;
				i++;
			}
		}
		if(possible) cout<<"yes\n";
		else cout<<"no\n";
	}
	

	return 0;
}
