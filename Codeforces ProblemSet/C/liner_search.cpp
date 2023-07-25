

// int linearSearch(int arr[], int n, int find){
// 	bool found = false;
// 	int ind = -1;
// 	for(int i = 0; i < n; i++){
// 		if(arr[i] == find){
// 			found = true;
// 			ind = i;
// 			break;
// 		}
// 	}

// 	return ind;
// }


#include<iostream>

using namespace std;

int maximum(int arr[], int n){

	int mx = arr[0];
	for(int i = 0; i < n; i++){
		if(mx < arr[i]) mx = arr[i];
	}
	int secMx = arr[0] == mx ? arr[1] : arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] == mx) continue;

		if(secMx < arr[i]) secMx = arr[i];
	}
	return secMx; 
}
// arr = {6, 0, 7, 4, 8, 1}
int main(){
	int n;
	cin>>n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	cout<<maximum(arr, n)<<endl;
}



