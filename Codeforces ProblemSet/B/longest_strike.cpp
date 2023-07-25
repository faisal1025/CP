#include<bits/stdc++.h>
#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


	void solve(){

		// Write your code here
		int t;
		cin>>t;

		while(t--){
			int n, k;
			cin>>n>>k;

			vector<int> arr(n);
			for(int i = 0; i < n; i++)
				cin>>arr[i];

			map<int, int> mp;
			for(int i = 0; i < n; i++){
				mp[arr[i]]++;
			}
			

			int l = 0, r = -1, mx = -1, pre = 0;
			int a = -1, b = -1;
			for(auto it = mp.begin(); it != mp.end(); ++it){
				if(it->second >= k){
					if(pre == 0){
						l = r = pre = it->first;
					}else if(pre+1 == it->first){
						r = it->first;
						pre = it->first;
					}else{
						if(mx < r-l){
							a = l; b = r;
							mx = r-l;
						}
						l = r = pre = it->first;
					}
				}else{
					pre = 0;
					if(mx < r-l){
						a = l; b = r;
						mx = r-l;
					}
					r = -1; l = 0;
				}
			}
			if(mx < r-l){
				a = l; b = r;
				mx = r-l;
			}
			if(a != -1 and b != -1)
				cout<<a<<" "<<b<<"\n";
			else
				cout<<-1<<endl;
		}
	}	


int main(){
	
	// for fast io
	FAST_IO
	solve();
	

	return 0;
}
