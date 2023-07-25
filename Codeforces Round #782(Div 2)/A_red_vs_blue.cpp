#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;
	while(t--){
		int n, r, b;
		cin>>n>>r>>b;

		int red = r, blue = b;
		string ans;

		while(blue > 0){
			blue += 1;
			int no_of_red = 0;
			if(red % blue){
				no_of_red = (red/blue)+1;
				for(int i = 0; i < no_of_red; i++){
					ans.push_back('R');
				}
				ans.push_back('B');
			}else{
				no_of_red = (red/blue);
				for(int i = 0; i < no_of_red; i++){
					ans.push_back('R');
				}
				ans.push_back('B');
			}
			red -= no_of_red;
			blue -= 2;
		}
		for(int i = 0; i < red; i++){
			ans.push_back('R');
		}
		cout<<ans<<endl;
	}
	

	return 0;
}
	