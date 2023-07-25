#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; // number of problems
    cin>>n;
    int ans = 0, c;
    while(n--){
        c = 0;
        int p, y, t;
        cin>>p>>y>>t;
        if(p == 1) c++;
        if(y == 1) c++;
        if(t == 1) c++;
        if(c > 1) ans++;
    }
    cout<<ans<<"\n";
    return 0;
}