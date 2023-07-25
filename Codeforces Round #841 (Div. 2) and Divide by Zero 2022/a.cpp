#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		std::vector<int> v(n);
		for (int i = 0; i < n; ++i){
			cin>>v[i];
		}

		long long pro = 1;
		for(int i = 0; i < n; i++){
			pro *= v[i];
		}

		pro += n-1;

		cout<<pro*2022<<endl;
	}
}