#include<bits/stdc++.h>
#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
 
class Solution{
public:
	void solve(){
 
		// Write your code here
		int t;
		cin>>t;
 
		while(t--){
			int n;
			cin>>n;
 
			vector<int> input(n);
			for(int i = 0; i < n; i++){
				cin>>input[i];
			}
 
			// solve
			if(n % 2 != 0){
				cout<<"NO\n";
				continue;
			}
 
			bool possible = true;
			sort(input.begin(), input.end());
			vector<int> arr;
			for(int i = 0, j = n/2; i < n/2 and j < n; i++, j++){
				arr.push_back(input[i]);
				arr.push_back(input[j]);
			}
 
			if(arr[n-1] <= arr[0] or arr[0] >= arr[1]) possible = false;
			if(arr[n-2] >= arr[n-1] or arr[n-1] <= arr[0]) possible = false;
 
			for(int i = 1; i < n-1; i++){
				if(i % 2 != 0){
					if(arr[i-1] >= arr[i] or arr[i] <= arr[i+1]) possible = false;
				}else{
					if(arr[i-1] <= arr[i] or arr[i] >= arr[i+1]) possible = false;
				}
			}
 
			if(possible){
				cout<<"YES\n";
				for(int i = 0; i < n; i++){
					cout<<arr[i]<<" ";
				}
				cout<<"\n";
			}else{
				cout<<"NO\n";
			}
 
		}
	}	
};
 
int main(){
	
	// for fast io
	FAST_IO
 
	Solution obj;
	obj.solve();
	
 
	return 0;
}