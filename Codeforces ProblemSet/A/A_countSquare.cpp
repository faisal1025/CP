#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, s;
        cin>>n>>s;
        ll sq = n*n;
        ll ans = s/sq;
        cout<<ans<<endl;
    }
    return 0;
}