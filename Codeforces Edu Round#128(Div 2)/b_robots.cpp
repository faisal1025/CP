#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	int t;
	cin>>t;


	while(t--){
		int n, m;
		cin>>n>>m;

		vector<string> field(n);

		for(int i = 0; i < n; i++){
			string input;
			cin>>input;
			field[i] = input;
		}

		if(field[0][0] == 'R'){
			cout<<"YES\n";
			continue;
		}

		bool get = false;
		pair<int, int> row;
		pair<int, int> col;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(field[i][j] == 'R'){
					//cout<<i<<" "<<j<<endl;
					row = {i, j};
					get = true;
					break;
				}
			}
			if(get == true) break;
		}

		get = false;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(field[j][i] == 'R'){
					//cout<<i<<" "<<j<<endl;
					col = {j, i};
					get = true;
					break;
				}
			}
			if(get == true) break;
		}

		if(row.first <= col.first and row.second <= col.second){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
	

	return 0;
}
