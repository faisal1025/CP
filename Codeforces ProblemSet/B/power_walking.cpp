#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int input[n];
        for(int i = 0; i < n; i++)cin>>input[i];

        map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[input[i]]++;
        }

        int type = mp.size();

        for(int i = 1; i <= n; i++){
            if(i <= type){cout<<type<<" ";}
            else cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}