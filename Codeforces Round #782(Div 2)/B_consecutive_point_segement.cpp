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

		int arr[n];
		for(int i = 0; i < n; i++) cin>>arr[i];

		bool possible = true, move = false;
		
		for(int i = 0; i < n-1; i++){
			if(((arr[i+1]-arr[i])-1) <= 2){
				if((arr[i+1]-arr[i])-1 == 0){
					continue;
				}
				else if((arr[i+1]-arr[i])-1 == 1){
					if(move == false){
						arr[i] += 1;
						move = true;
					}
					else if(move == true){
						arr[i+1] -= 1;
					}
				}
				else if((arr[i+1]-arr[i])-1 == 2){
					if(move == false){
						arr[i] += 1;
						arr[i+1] -= 1;
						move = true;
					}
					else{
						possible = false;
						break;
					}
				}
			}
			else{
				possible = false;
				break;
			}
		}
		if(possible){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}

	

	return 0;
}

