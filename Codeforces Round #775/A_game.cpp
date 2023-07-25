#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> stage(n, 0);
        for(int i = 0; i < n; i++) cin>>stage[i];

        int st = 0, en = 0, ans;
        for(int i = 0; i < n; i++){
            if(stage[i] == 0){
                st = i-1;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--) {
            if(stage[i] == 0){
                en = i+1;
                break;
            }
        }
        ans = en-st;
        cout<<ans<<endl;
    }
    return 0;
}