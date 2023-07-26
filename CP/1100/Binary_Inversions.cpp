#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        long long mx = INT_MIN;
        long long ans = 0;
        long long no_of_zeros = 0;
        for(int i = n-1; i >= 0; i--){
            if(arr[i] == 0){
                no_of_zeros++;
            }else{
                ans += no_of_zeros;
            }
        }
        mx = max(mx, ans);

        long long zeros = no_of_zeros-1;
        ans = 0;
        int flag = 1;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                if(flag == 1){
                    ans += zeros;
                    flag = 0;
                }else{
                    zeros--;
                }
            }else{
                ans += zeros;
            }
        }
        mx = max(mx, ans);

        zeros = 0;
        ans = 0;
        flag = 1;
        for(int i = n-1; i >= 0; i--){
            if(arr[i] == 0){
                zeros++;
            }else{
                if(flag == 1){
                    zeros++;
                    flag = 0;
                }else{
                    ans += zeros;
                }
            }
        }
        mx = max(mx, ans);
        cout<<mx<<endl;
    }
}