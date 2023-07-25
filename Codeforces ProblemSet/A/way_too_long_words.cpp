#include<bits/stdc++.h>

using namespace std;

string getStr(int num){
    string numst;
    while(num){
        int dig = num % 10;
        numst.push_back('0'+dig);
        num /= 10;
    }
    reverse(numst.begin(), numst.end());
    return numst;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        int n = st.length();
        if(n > 10){
            string ans;
            ans.push_back(st[0]);
            int num = n-2;
            string s = getStr(num);
            ans += s;
            ans.push_back(st[n-1]);
            cout<<ans<<endl;
        }else{
            cout<<st<<endl;
        }
    }
    return 0;
}