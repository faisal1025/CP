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
	
	int n;
	cin>>n;

	vector<int> biscuits(n);
	for(int i = 0; i < n; i++) cin>>biscuits[i];

	int students;
	cin>>students;

	sort(biscuits.begin(), biscuits.end());

	int mn = 0, mx = students-1;
	int mnDiff = INT_MAX;
	while(mx < n){
		mnDiff = min(mnDiff, biscuits[mx]-biscuits[mn]);
		mn++; mx++;
	}
	cout<<mnDiff<<endl;
	return 0;
}