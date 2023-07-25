#include<bits/stdc++.h>
#define ll long long

using namespace std;

int bruteForce(vector<int> &arr, int k){
	int cnt = 0, x = k, n = arr.size();
	bool possible = true;
	while(possible){
		x = k;
		possible = false;
		for(int i = 0; i < n; i++){
			if(arr[i] <= x){
				cnt++;
				possible = true;
				x -= arr[i];
			}
			arr[i] += 1;
		}
	}
	return cnt;
}

ll sum(vector<int> &arr){
	ll s = 0, n = arr.size();

	for(int i = 0; i < n; i++){
		s += arr[i];
	}
	return s;
}

int main(){

	// Write your code here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;

	while(t--){
		int n, k;
		cin>>n>>k;

		vector<int> arr(n);
		for(int i = 0; i < n; i++) cin>>arr[i];

		sort(arr.begin(), arr.end());

		// int cnt = bruteForce(arr, k);
		ll day = 0, cnt = 0;
		ll s = sum(arr);

		// s + n, s + 2n, s + 3n, s + 4n, ...., (s + day*n) we have to find day when price 
		// excceds pocket money. We can see a good use of Ap here.
		while(arr.size() != 0){
			int n = arr.size();
			if(s <= k){
				int diff = k-s;
				int dy = (diff / n)+1;
				cnt += (dy*n);
				day += (dy);
				s += (dy*n);
				s -= arr[n-1]+day;
				arr.pop_back(); 
			}
			else{
				s -= arr[n-1]+day;
				arr.pop_back();
			}
		}

		
		cout<<cnt<<"\n";
	}
	

	return 0;
}
