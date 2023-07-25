#include<bits/stdc++.h>
#define ll long long

using namespace std;


class Solution{
public:
	void solve(vector<vector<char>> & grid, int n, int m){
		for(int col = 0; col < m; col++){
			int row = n-1, curr;
			while(row >= 0){
				if(grid[row][col] == '.'){
					for(curr = row-1; curr >= 0; curr--){
						if(grid[curr][col] == '*'){
							grid[row][col] = '*';
							grid[curr][col] = '.';
							row--;
						}
						else if(grid[curr][col] == 'o'){
							row = curr;
							break;
						}
					}
					if(curr == -1) break;
				}
				row--;
			} 
		}
	}
};

int main(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int n, m;
		cin>>n>>m;

		vector<vector<char>> grid(n, vector<char>(m));

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin>>grid[i][j];
			}
		}

		Solution obj;
		obj.solve(grid, n, m);

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout<<grid[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	

	return 0;
}
