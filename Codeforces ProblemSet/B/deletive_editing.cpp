#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string st;

        getline(cin, st);
        int pos = st.find(' ');
        string s = st.substr(0, pos);
        string t = st.substr(pos+1);

        bool possible = false;
        int s_len = s.length();
        int t_len = t.length();
        map<char, int> mp;
        for(int i = 0; i < t_len; i++){
            mp[t[i]]++;
        }
        int j = t_len-1;
        for(int i = s_len-1; i >= 0; i--){
            if(mp[s[i]] > 0){
                if(s[i] == t[j]){
                    mp[s[i]]--;
                    j--;
                    if(j == -1) {
                        possible = true;
                        break;
                    }
                }else{
                    break;
                }
            }
        }
        if(possible) cout<<"YES\n";
        else cout<<"NO\n";   
    }
    return 0;
}