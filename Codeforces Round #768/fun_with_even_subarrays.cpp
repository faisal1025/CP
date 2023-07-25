#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int minOperation(vector<int> &a, int n){
        int cnt = 0;
        int k = 2;
        int flag = 0;
        for(int i = n-2; i >= 0; i--){
            if(n-i == k){
                flag = 0;
                for(int j = 0; j < k/2; j++){
                    if(a[i+j] != a[i+k/2+j]){
                        a[i+j] = a[i+k/2+j];
                        if(flag == 0){
                            flag = 1;
                            cnt++;
                        }
                    }
                }
                k += 2;
            }
        }
        if(n % 2 != 0 and a[0] != a[n-1])
            cnt++;
        return cnt;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin>>a[i];

        Solution obj;
        cout<<obj.minOperation(a, n)<<endl;
    }
    return 0;
}