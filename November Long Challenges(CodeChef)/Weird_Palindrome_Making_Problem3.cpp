#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int odd = 0;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] % 2 != 0){
                odd++;
            }
        }

        cout<<odd/2<<endl;

    }
}