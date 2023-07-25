#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b; 
        cin>>a>>b; 
        if(a == 0){
            cout<<1<<"\n";
        }else{
            int ans = (b*2)+a+1;
            cout<<ans<<"\n";
        }
    }
    return 0;
}