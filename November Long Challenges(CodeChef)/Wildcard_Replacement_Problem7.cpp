#include<bits/stdc++.h>
#define ll long long int
using namespace std;

struct info{
    int sz = 0;
    int hi = 0;
    int lo = 0;
};

int isValid(string &s, int l, info dp[]){
    if(dp[l].sz != 0){
        return dp[l].hi;
    }
    if(s[l] == '?'){
        dp[l].sz = 1;
        dp[l].hi = 1;
        dp[l].lo = 0;
        return 1;
    }
    int start, min1, max1, min2, max2, op;
    if(s[l] == '('){
        int left = l+1;       
        isValid(s, left, dp);
        int op = l + dp[left].sz + 1;
        int right = op + 1;
        isValid(s, right, dp);
        int r = op + dp[right].sz + 1;
        if(s[r] == ')'){
            dp[l].sz = 3 + dp[left].sz + dp[right].sz;
            if(s[op] == '+'){
                dp[l].hi = dp[left].hi + dp[right].hi;
                dp[l].lo = dp[left].lo + dp[right].lo;
            }else{
                dp[l].hi = dp[left].hi - dp[right].lo;
                dp[l].lo = dp[left].lo - dp[right].hi;
            }
        }
        
    }
    return dp[l].hi; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    std::cin>>t;
    while (t--)
    {
        string s;
        std::cin>>s;
        ll len = s.size();
        info dp[len+1];
        int q;
        std::cin>>q;
        while(q--){
            ll l, r;
            std::cin>>l>>r;
            std::cout<<isValid(s, l-1, dp)<<" ";
        }
        std::cout<<"\n";
    }
    

}