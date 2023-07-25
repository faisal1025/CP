#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int c = 0, e, num = -1;
    for(int i = 1; i <= n; i++){
        cin>>e;
        if(e < 1) continue;
        if(i == k){
            num = e;
            c++;
        }
        else{
            if(e >= num){
                c++;
            }
        }
    }
    int ans = c; 
    cout<<ans<<"\n";
    return 0;
}