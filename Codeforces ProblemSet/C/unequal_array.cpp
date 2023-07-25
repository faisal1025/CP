#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		vector<int> arr(n);
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}

		int st = -1, en = -1;
		for(int i = 1; i < n; i++){
			if(arr[i] == arr[i-1] and st == -1){
				st = i-1;
			}
			else if(arr[i] == arr[i-1] and st != -1){
				en = i;
			}
		}
		if(st == -1 || en == -1){
			cout<<0<<endl;
			continue;
		}
		en -= 1;
		int no_of_element = en-st;
		no_of_element == 1 ? cout<<1<<endl : cout<<no_of_element-1<<endl;
	}
	

	return 0;
}
