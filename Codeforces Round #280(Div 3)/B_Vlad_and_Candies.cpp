#include<bits/stdc++.h>

using namespace std;

bool comp(int a, int b){
    return a > b; 
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> input(n);
        for(int i = 0; i < n; i++) {
            cin>>input[i];
        }
        sort(input.begin(), input.end(), comp);
        
        if(n == 1){
            if(input[0] == 1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
            continue;
        }
        if(input[0] == input[1] || input[0]-input[1] == 1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}