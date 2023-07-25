#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; // find_by_order(ind), order_of_key(key)


void solve(){

    // Write your code here
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];

        int x = arr[n-1];
        int cnt = 0;
        
        for(int i = n-1; i >= 0; i--){
            if(arr[i] == x) continue;
            else{
                cnt++;
                int sec = i+1;
                int l = n-sec;
                int fir = sec-l >= 0 ? sec-l : 0;
                for(int a = fir, b = sec; a < sec; a++, b++){
                    if(arr[a] != arr[b]){
                        arr[a] = arr[b];
                    }
                }
                i = fir;
            }
        }

        cout<<cnt<<"\n";
    }
    
}    


int main(){
    
    // for fast io
    FAST_IO

    solve();
    

    return 0;
}
