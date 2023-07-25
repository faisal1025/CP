#include<iostream>

using namespace std;

int main(){
	int k, s;
	cin>>k>>s;

	int cnt = 0;
	for(int i = 0; i <= k; i++){
		for(int j = 0; j <= k; j++){
			for(int l = 0; l <= k; l++){
				if((i+j+l) == s){
					cnt++;
				}
			}
		}
	}
	cout<<cnt<<endl;
}