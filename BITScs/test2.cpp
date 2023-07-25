#include<bits/stdc++.h>

using namespace std;

bool isMatch(string s, string p) {
    int n = p.length();
    int m = s.length();
    
    vector<vector<bool>> grid(n+1, vector<bool>(m+1));
    
    // base condition
    grid[0][0] = true;
    for(int i = 1; i <= m; i++){
        grid[0][i] = false;
    }
    for(int i = 1; i <= n; i++){
        if(p[i-1] == '*'){
            grid[i][0] = grid[i-1][0]; 
        }else{
            grid[i][0] = false;
        }
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s[j-1] == p[i-1] || p[i-1] == '?'){
                grid[i][j] = grid[i-1][j-1];
            }else if(p[i-1] == '*'){
                grid[i][j] = grid[i-1][j] || grid[i][j-1];
            }else{
                grid[i][j] = false;
            }
        }
    }
    return grid[n][m];
}	


int main(){
	
	// for fast io
	int t;
    cin>>t;

    while(t--){
        string w, p;
        cin>>w>>p;

        if(isMatch(w, p)){
            cout<<"True\n";
        }else{
            cout<<"False\n";
        }
    }
	return 0;
}
