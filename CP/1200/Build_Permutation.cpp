#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define mod 1000000007
#define f first
#define s second
#define inf 1e9

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		int mxNum = (n-1)*2;

		int sq = 1;

		vector<int> sqrt;
		vector<int> ans(n);

		while(sq*sq <= mxNum){
			sqrt.push_back(sq*sq);
			sq++;
		}

		sqrt.push_back(0);
		sort(sqrt.begin(), sqrt.end(), greater<int> ());

		set<int> st;
		int j = n-1;
		for(int i = 0; i < sqrt.size(); i++){
			for(; j >= 0; j--){
				int ele = sqrt[i]-j;
				if(ele > n-1 || st.count(ele) > 0){
					break;
				}
				ans[j] = ele;
				st.insert(ele);
			}
		}

		for(int i = 0; i < n; i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}