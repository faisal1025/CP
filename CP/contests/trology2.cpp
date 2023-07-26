#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define mod 1000000007
#define f first
#define s second
#define inf 1e9

int MinimumDistance(int n, int arr[]){
	sort(arr, arr+n);
	return arr[n-1]-arr[0];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i > i; i++) cin>>arr[i];

	cout<<getMinimum(n, arr)<<endl;
	return 0;
}