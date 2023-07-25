#include<bits/stdc++.h>
#define ll long long int
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


	void solve(){

		// Write your code here
		int t;
		cin>>t;

		for(int tst = 1; tst <= t; tst++){
			int n, x, y;
			cin>>n>>x>>y;

			ll sum = (n*(n+1))/2;
			//cout<<sum<<endl;
			bool possible = false;
			ll num;
			vector<int> arr;
			for(num = 1; num <= sum/2; num++){
				ll one = x*num;
				ll two = y*num;

				if(sum > one+two){
					continue;
				}
				else if(sum == one+two){
					//cout<<one<<" "<<two<<endl;
					for(int i = n; i > 0 and one > 0; i--){
						if(i <= one){
							one -= i;
							arr.push_back(i);
						}			
					}
					possible = true;
					break;
				}
				else{
					break;
				}

			}
			int s = arr.size();
			if(possible){
				cout<<"Case #"<<tst<<": POSSIBLE"<<endl; 
				cout<<s<<endl;
				for(int i = 0; i < s; i++){
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}else{
				cout<<"Case #"<<tst<<": IMPOSSIBLE"<<endl; 
			}

		}
	}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
