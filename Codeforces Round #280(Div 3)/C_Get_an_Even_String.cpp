#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        int n = st.length(), cnt = 0;
        vector<int> dp(n+1);
        vector<int> found(26, -1);
        dp[n] = 0;
        dp[n-1] = 1;
        found[st[n-1]-'a'] = n-1;
        for(int i = n-2; i >= 0; i--){
            if(found[st[i]-'a'] == -1){
                //cout<<st[i]<<endl;
                dp[i] = 1+dp[i+1];
            }else{
                dp[i] = min(1+dp[i+1], (found[st[i]-'a']-i-1) + dp[found[st[i]-'a']+1]);
            }
            found[st[i]-'a'] = i;
        }
        /*
        for(int i = 0; i < n; i++){
            cout<<dp[i]<<" ";
        }
        cout<<endl;
        */
        cout<<dp[0]<<"\n";
    }
    return 0;
}