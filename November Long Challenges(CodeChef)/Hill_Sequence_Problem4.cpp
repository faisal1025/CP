#include<bits/stdc++.h>

using namespace std;

void printAns(vector<int> ans){
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];

        unordered_map<int, int> ump;
        vector<int> left;
        vector<int> right;
        int mele = INT_MIN;
        int over = 0;
        for(int i = 0; i < n; i++){
            ump[arr[i]]++;
            mele = max(mele, arr[i]);
            if(ump[arr[i]] > 2) {
                cout<<-1<<"\n";
                over = 1;
                break;
            }
        }
        if(over) continue;
        if(ump[mele] > 1) {cout<<-1<<"\n"; continue;}

        for(int i = 0; i < n; i++){
            if(ump[arr[i]] > 1){
                left.push_back(arr[i]);
                ump[arr[i]]--;
            }else if (ump[arr[i]] == 1){
                right.push_back(arr[i]);
                ump[arr[i]]--;
            }
        }

        sort(left.begin(), left.end());
        sort(right.begin(), right.end(), greater<int>());
        vector<int> ans;
        for(auto it : left){
            ans.push_back(it);
        }
        for(auto it : right){
            ans.push_back(it);
        }
        printAns(ans);
        cout<<endl;
        continue;
    }

    return 0;
}