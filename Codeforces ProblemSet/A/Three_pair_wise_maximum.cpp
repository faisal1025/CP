#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int mx = 0, cnt = 0;
        vector<int> arr(3);
        for(int i = 0; i < 3; i++) {
            cin>>arr[i];
            mx = max(mx, arr[i]);
        }
        for(int i = 0; i < 3; i++) {
            if(mx == arr[i]) cnt++;
        }
        if(cnt > 1){
            if(cnt == 2){
                if(arr[0] == arr[2]){
                    swap(arr[0], arr[1]);
                    arr[2] = arr[0];
                }else if(arr[1] == arr[2]){
                    arr[1] = arr[0];
                }else if(arr[0] == arr[1]){
                    arr[1] = arr[2];
                }
            }
            cout<<"YES\n";
            for(int i = 0; i < 3; i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}