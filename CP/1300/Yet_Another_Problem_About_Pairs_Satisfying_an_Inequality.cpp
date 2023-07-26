#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n+1);
        for(int i = 1; i <= n; i++){
            cin>>arr[i];
        }

        vector<int> dp(n+1, 0);
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(arr[i] < i){
                cnt++;
            }
            dp[i] = cnt;
        }

        

        long long pairs = 0;
        for(int i = 1; i <= n; i++){
            if(arr[i]-1 < 0) continue;
            if(arr[i] < i){
                //cout<<arr[i]-1<<" - "<<dp[arr[i]-1]<<endl;
                pairs += dp[arr[i]-1];
            }
        }
        cout<<pairs<<endl;
    }
    return 0;
}