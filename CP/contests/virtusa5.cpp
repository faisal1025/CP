#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define mod 1000000007
#define f first
#define s second
#define inf 1e9

bool isSafe(int i, int j, int n, int m){
	return i < n and i >= 0 and j < m and j >= 0;
}

int getNoOfWays(vector<vector<char>> &grid, vector<vector<bool>> &covered, int n, int m){
	int ways = 0;
	bool nonCovered = false;
	// cout<<"aaya\n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(covered[i][j] == true){
				covered[i][j] = false;
				nonCovered = true;
				if(isSafe(i+2, j+1, n, m) and covered[i+1][j] and covered[i+2][j] and covered[i+2][j+1]){
					covered[i+2][j+1] = covered[i+2][j] = covered[i+1][j] = false;
					ways += getNoOfWays(grid, covered, n, m);
					covered[i+2][j+1] = covered[i+2][j] = covered[i+1][j] = true;
				}
				if(isSafe(i+2, j-1, n, m) and covered[i+1][j] and covered[i+2][j] and covered[i+2][j-1]){
					covered[i+2][j-1] = covered[i+2][j] = covered[i+1][j] = false;
					ways += getNoOfWays(grid, covered, n, m);
					covered[i+2][j-1] = covered[i+2][j] = covered[i+1][j] = true;
				}
				if(isSafe(i-2, j+1, n, m) and covered[i-1][j] and covered[i-2][j] and covered[i-2][j+1]){
					covered[i-2][j+1] = covered[i-2][j] = covered[i-1][j] = false;
					ways += getNoOfWays(grid, covered, n, m);
					covered[i-2][j+1] = covered[i-2][j] = covered[i-1][j] = true;
				}
				if(isSafe(i-2, j-1, n, m) and covered[i-1][j] and covered[i-2][j] and covered[i-2][j-1]){
					covered[i-2][j-1] = covered[i-2][j] = covered[i-1][j] = false;
					ways += getNoOfWays(grid, covered, n, m);
					covered[i-2][j-1] = covered[i-2][j] = covered[i-1][j] = true;
				}
				if(isSafe(i-1, j+2, n, m) and covered[i][j+1] and covered[i][j+2] and covered[i-1][j+2]){
					covered[i-1][j+2] = covered[i][j+1] = covered[i][j+2] = false;
					ways += getNoOfWays(grid, covered, n, m);
					covered[i-1][j+2] = covered[i][j+1] = covered[i][j+2] = true;
				}
				if(isSafe(i+1, j+2, n, m) and covered[i][j+1] and covered[i][j+2] and covered[i+1][j+2]){
					covered[i+1][j+2] = covered[i][j+1] = covered[i][j+2] = false;
					ways += getNoOfWays(grid, covered, n, m);
					covered[i+1][j+2] = covered[i][j+1] = covered[i][j+2] = true;
				}
				if(isSafe(i+1, j-2, n, m) and covered[i][j-1] and covered[i][j-2] and covered[i+1][j-2]){
					covered[i+1][j-2] = covered[i][j-1] = covered[i][j-2] = false;
					ways += getNoOfWays(grid, covered, n, m);
					covered[i+1][j-2] = covered[i][j-1] = covered[i][j-2] = true;
				}
				if(isSafe(i-1, j-2, n, m) and covered[i][j-1] and covered[i][j-2] and covered[i-1][j-2]){
					covered[i-1][j-2] = covered[i][j-1] = covered[i][j-2] = false;
					ways += getNoOfWays(grid, covered, n, m);
					covered[i-1][j-2] = covered[i][j-1] = covered[i][j-2] = true;
				}
				covered[i][j] = true;
			}
		}
	}
	if(nonCovered == false) return 1;
	return ways;
} 

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin>>n>>m;

	vector<vector<char>> grid(n, vector<char>(m));
	vector<vector<bool>> covered(n, vector<bool> (m, true));

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>grid[i][j];
			if(grid[i][j] == '#') covered[i][j] = false;
		}
	}
	

	cout<<getNoOfWays(grid, covered, n, m)/2<<"\n";

	return 0;
}