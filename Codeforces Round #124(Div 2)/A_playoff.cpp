#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int ans = 1;
        for(int i = 1; i < n; i++){
            ans = ans+ans+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}