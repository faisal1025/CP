#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i = 1; i <= t; ++i){
        string r;
        cin>>r;
        string p;
        cin>>p;
        
        int ans = 0, j = 0, k = 0;
        while(j < r.length() and k < p.length()){
                if(r[j] == p[k]){
                    j++; k++;
                }else{
                    k++;
                    ans++;
                }
        }
        
        if(j == r.length()){
            ans += (p.length()-k);
            cout<<"Case #"<<i<<": "<<ans<<endl;
        }else{
            cout<<"Case #"<<i<<": IMPOSSIBLE"<<endl;
        }
    }
    return 0;
}      