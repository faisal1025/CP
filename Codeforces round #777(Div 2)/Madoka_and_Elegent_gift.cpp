#include<bits/stdc++.h>

using namespace std;

bool isElegent(vector<string> &mat, int n, int m){
    for(int i = 0; i <= n-2; i++){
        for(int j = 0; j <= m-2; j++){
            int cnt = 0;
            for(int k = i; k < i+2; k++){
                for(int l = j; l < j+2; l++){
                    if(mat[k][l] == '1'){
                        cnt++;
                    }
                }
            }
            if(cnt == 3) return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<string> mat(n);
        for(int i = 0; i < n; i++){
            string st;
            cin>>st;
            mat[i] = st;
        }

        if(isElegent(mat, n, m))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}