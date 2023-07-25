#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for(int i = 2; i <= n; i++) cin>>arr[i];

        map<int,int> adj;
        for(int i = 2; i <= n; i++){
            adj[arr[i]]++;
        }
        vector<int> child;
        int time = 1;
        for(auto it : adj){
            child.push_back(it.second);
            time++;
        }
        
        sort(child.begin(), child.end(), greater<int>());
        int leftTime = time, mx = 0;
        for(int i = 0; i < child.size(); i++){
            if(child[i] > leftTime){
                child[i] = child[i]-leftTime;
                mx = max(mx, child[i]);
            }else{
                child[i] = 0;
            }
            leftTime--;
        }
        
        // creating array by putting 1 , -1 at start, end point.
        // 1 0 0 0 -1
        int leftele[mx+1] = {0};
        for(int i = 0; i < child.size(); i++){
            if(child[i] == 0) continue;
            leftele[0] += 1;
            leftele[child[i]] += -1;
        }

        // Creating prefix sum array
        for(int i= 1; i < mx+1; i++){
            leftele[i] += leftele[i-1];
        }
        /*
        for(int i= 0; i < mx+1; i++){
            cout<<leftele[i]<<" ";
        }
        cout<<"\n";
        */
        int i, j;
        for(i = 0, j = mx-1; i < j; i++){
            leftele[j]--;
            leftele[i] = 0;
            if(leftele[j] == 0) j--;
            time++;
        }
        if(leftele[i] != 0) time++;
        cout<<time<<endl;
        
    }
    return 0;
}