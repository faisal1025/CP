#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		string st;
		cin>>st;

		int size = st.length();
		int bob = 0, alice = 0;
		
		if(size == 1){
			bob = (st[0]-'a')+1;
			cout<<"Bob "<<bob-alice<<endl;
			continue;
		}

		int total = 0;
		for(int i = 0; i < size; i++){
			total += (st[i]-'a')+1;
		}

		if(size % 2 == 0){
			alice = total;
			cout<<"Alice "<<alice-bob<<endl;
		}else{
			bob = min((st[0]-'a')+1, (st[size-1]-'a')+1);
			alice = total-bob;
			cout<<"Alice "<<alice-bob<<endl;
		}
	}
	

	return 0;
}
