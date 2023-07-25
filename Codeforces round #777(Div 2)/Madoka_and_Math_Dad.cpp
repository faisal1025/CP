#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag;
        if(n % 3 == 1){
            flag = false;
        }else{
            flag = true;
        }
        while(n != 0){
            if(flag){
                cout<<2;
                n -= 2;
                flag = false;
            }else{
                cout<<1;
                n -= 1;
                flag = true;
            }
        }
        cout<<"\n";
        
    }
    return 0;
}