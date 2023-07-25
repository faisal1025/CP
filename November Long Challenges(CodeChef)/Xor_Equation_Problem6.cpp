#include<bits/stdc++.h>
#define m 63
#define ll long long int 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;

    long long int val = 1;
    unordered_map<int, ll> ump;
    ump[0] = val;
    for(int i = 1; i < m; i++){
        val = val*2;
        ump[i] = val;
    }

    while(t--){
        int n;
        cin>>n;
        vector<bitset<m>> arr;
        for(int i = 0; i < n; i++){
            ll o;
            cin>>o;
            bitset<m> a(o);
            arr.push_back(a);
        }

        int last = -1;
        for(int i = m-1; i >= 0; i--){
            for(int j = 0; j < n; j++){
                if(arr[j][i] == 1) {
                    last = i;
                }    
            }
            if(last != -1){
                break;
            }
        }
        if(last == -1) {
            cout<<0<<"\n";
            continue;
        }

        int cnt;
        ll ans = 0;
        for(int i = 0; i < last; i++){
            cnt = 0; 

            for(int j = 0; j < n; j++){
                if(arr[j][i] == 1) cnt++;                              
            }

            if(cnt % 2 != 0){
                ans += ump[i];
                for(int k = 0; k < n; k++){
                    ll a = arr[k].to_ullong();
                    ll res = ump[i] + a;
                    bitset<m> result(res);
                    arr[k] = result;
                }
            }
        }

        // Getting the last index having atlest 1 bit set and the count of set bit 
        // at that last index.
        int c = 0;
        last = -1;
        for(int i = m-1; i >= 0; i--){
            for(int j = 0; j < n; j++){
                if(arr[j][i] == 1) {
                    c++;
                    last = i;
                }    
            }
            if(last != -1){
                break;
            }
        }
        // if the count of set bits at the last index in even it become 0 return ans or
        // else if count is odd it is impossible to make it 0 return -1. 
        if(c % 2 != 0){
            cout<<-1<<"\n";
        }else{
            cout<<ans<<"\n";
        }
    }
    return 0;
}