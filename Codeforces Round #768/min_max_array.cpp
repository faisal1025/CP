#include<iostream>
#include<vector>

using namespace std;

class Solution{
    private:
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

    public:
    int getMinMaxProduct(vector<int> &a, vector<int> &b, int n){
        for(int i = 0; i < n; i++){
            if(a[i] >= b[i]) continue;
            else{
                swap(a[i], b[i]);
            }
        }
        int mx1, mx2;
        mx1 = mx2 = INT_MIN;
        for(int i = 0; i < n; i++){
            mx1 = max(mx1, a[i]);
            mx2 = max(mx2, b[i]);
        }
        return mx1*mx2;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];

        Solution obj;
        cout<<obj.getMinMaxProduct(a, b, n)<<endl;
    }
    return 0;
}