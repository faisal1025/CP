#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, m;
        cin>>n>>m;
        vector<long long> indices(m);
        for(int i = 0; i < m; i++){
            cin>>indices[i];
        }

        sort(indices.begin(), indices.end());

        vector<long long> gap;
        for(int i = 1; i < m; i++){
            gap.push_back(indices[i]-indices[i-1]-1);
        }
        gap.push_back(n-indices[m-1]+indices[0]-1);
        sort(gap.begin(), gap.end(), greater<int>());

        long long day = 0;
        long long safe = 0;
        for(int i = 0 ; i < gap.size(); i++){
            gap[i] -= day*2;
            if(gap[i] <= 0)
                break;

            if(gap[i] == 1 || gap[i] == 2){
                day += 1;
                gap[i] = 1;
            }else{
                day += 2;
                gap[i] -= 1;
            }
            safe += gap[i];
        }
        long long infected = n-safe;
        cout<<infected<<endl;
    }
}