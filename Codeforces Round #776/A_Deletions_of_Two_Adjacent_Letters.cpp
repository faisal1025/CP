#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--) {
        string s;
        char ch;
        cin>>s;
        cin>>ch;
        int sz = s.length(), istrue = 0;
        for(int i = 0; i < sz; i += 2) {
            if(s[i] == ch) {
                istrue = 1;
                break;
            }
        }
        if(istrue == 1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}