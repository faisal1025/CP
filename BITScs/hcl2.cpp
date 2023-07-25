#include<bits/stdc++.h>

using namespace std;

int submatrixSum(vector<vector<int>> &mat, int k) {
    int m = mat.size();
    int n = mat[0].size();

    vector<vector<int>> prefix(m+1, vector<int>(n+1, 0));
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            prefix[i][j] = mat[i-1][j-1];
        }
    }
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            prefix[i][j] += prefix[i][j-1]+prefix[i-1][j]-prefix[i-1][j-1];
        }
    }
    

    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            cout<<prefix[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            
        }
    }
    return 0;
}	


int main(){
	
	// for fast io
	int m, n, k;
    cin>>m>>n>>k;
    vector<vector<int>> arr(m, vector<int> (n, 0));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
        
    }

    cout<<submatrixSum(arr, k);
	return 0;
}
