#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int l, r, a;
        cin>>l>>r>>a;
        int ans = 0;
        if(a == 1){
            ans = (((r) / a) + ((r) % a));
        }else{
            if(r % a == 0){
                ans = max(ans, (((r) / a) + ((r) % a)));
                r -= 1;
                if(r >= l)
                ans = max(ans, (((r) / a) + ((r) % a)));
            }else{
                ans = max(ans, (((r) / a) + ((r) % a)));
                r -= (r%a);
                if(r-1 >= l)
                ans = max(ans, (((r-1) / a) + ((r-1) % a)));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}