#include<bits/stdc++.h>

using namespace std;

void printGraph(vector<int> adjlist[], int n){
    for(int i = 1; i <= n; i++){
        for(auto it : adjlist[i]){
            cout<<i<<" "<<it<<"\n";
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, e;
        cin>>n>>e;

        vector<int> adjlist[n+1];
        for(int i = 1; i < n; i++){
            adjlist[i].push_back(i+1);
        }
        e = e - (n-1);
        int lim = 0;
        while(e > 0){
            lim = lim + 1;
            int tar = 1+lim+1;
            for(int i = 1; i <= lim; i++){
                adjlist[i].push_back(tar);
                e--;
                if(e <= 0) break;
            }
        }
        printGraph(adjlist, n);
    }
}