#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];
 
        map<int, int> ump;
        int mxele = INT_MIN;
        for(int i = 0; i < n; i++){
            ump[arr[i]]++;
            mxele = max(mxele, ump[arr[i]]);
        }
 
        int lim = n-mxele;
        int ans = 0;
        while(lim > 0){
            if(lim >= mxele) {
                lim = lim-mxele;
                ans += mxele+1;
                mxele *= 2;
            }else{
                ans += lim+1;
                mxele += lim;
                lim = 0;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}