#include<iostream>

using namespace std;

int main(){
	long long int n;
	cin>>n;

	long long int arr[n];
	for(int i = 0; i < n; i++)
		cin>>arr[i];

	long long int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}

	cout<<sum<<"\n";
}
