#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

long long int operation(int x, int n){
	long long int a = x;
	for(int i = 1; i <= n; i++){
		a = a*2;
	}
	return a;
}

int main() {

	// Your code here
	int x, n;
	cin>>x>>n;

	long long int ans = operation(x, n);
	cout<<ans<<endl;
	return 0;
}