#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int flag = 0;
        vector<long long int> arr(n, 0);
        long long int ele = 1;
        for(int i = 0; i < n; i++) {
            arr[i] = ele;
            ele = ele*3;
            if(ele > 1162261467){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
            for(int i = 0; i < n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}