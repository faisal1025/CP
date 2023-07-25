#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int noOfBalls(vector<int> &passes, int n) {
        long long sum = 0;
        int mx = INT_MIN;
        
        for(int i = 0; i < n; i++) {
            sum += passes[i];
            mx = max(mx, passes[i]);
        }
        if(sum == 0) return 0;
        sum -= mx;
        if(mx > sum){
            return mx-sum;
        }else{
            return 1;
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> passes(n, 0);
        for(int i = 0; i < n; i++) {
            cin>>passes[i];
        }

        Solution obj;
        cout<<obj.noOfBalls(passes, n)<<endl;
    }
}