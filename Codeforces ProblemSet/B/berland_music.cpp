#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        string str;
        cin>>str;

        // solving
        map<int, vector<int>> mp;
        for(int i = 0; i < n; i++){
            mp[str[i]-'0'].push_back(arr[i]);
        }

        // sorting the map array
        int m[n+1];
        int num = 1;
        for(auto it : mp){
            sort(it.second.begin(), it.second.end());
            for(auto ele : it.second){
                //cout<<ele<<" ";
                m[ele] = num;
                num++;
            }
        }
        //cout<<"\n";

        for(int i = 0; i < n; i++){
            cout<<m[arr[i]]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}