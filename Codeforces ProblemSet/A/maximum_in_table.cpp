#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> mat(n, vector<int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || j == 0) {
                mat[i][j] = 1;
                continue;
            }
            mat[i][j] = mat[i-1][j]+mat[i][j-1];
        }
    }

    cout<<mat[n-1][n-1]<<"\n";
    
    return 0;
}