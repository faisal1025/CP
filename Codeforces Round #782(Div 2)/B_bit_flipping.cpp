#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		string bs;
		cin>>bs;

		vector<int> choice(n, 0);

		if(k % 2 != 0){ // if odd
			for(int i = 0; i < n; i++){
				if(bs[i] == '0') bs[i] = '1';
				else bs[i] = '0';
			}
		}

		for(int i = 0; k > 0 and i < n; i++){
			if(bs[i] == '0'){
				k--;
				bs[i] = '1';
				choice[i] += 1;
			}
		}

		if(k % 2 != 0){
			bs[n-1] = '0';
		}
		choice[n-1] += k;
		
		cout<<bs<<"\n";
		for(int i = 0; i < n; i++) cout<<choice[i]<<" ";
		cout<<"\n";
	}
	

	return 0;
}
