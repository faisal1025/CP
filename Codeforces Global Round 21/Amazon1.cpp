#include<bits/stdc++.h>
using namespace std;

int goodString (int N, int Q, string S, vector<int> arr, vector<vector<int> > ranges) {
    vector<vector<int> > count(26, vector<int> (N+1, 0));
    int ans = 0;
    for(int j = 0; j < N; j++){
        count[S[j]-'a'][j+1] = 1;
    }
    
    bool possible = false;
    
    vector<vector<int>> prefix = count;
    for(int i = 0; i < 26; i++){
        for(int j = 1; j <= N; j++){
            prefix[i][j] = prefix[i][j]+prefix[i][j-1];
        }
            }
    
    possible = true;
    for(int i = 0; i < Q; i++){
        int l = ranges[i][0];
        int r = ranges[i][1];

        for(int j = 0; j < 26; j++){
            int cnt = prefix[j][r]-prefix[j][l-1];
            if(cnt >= 2) {
                possible = false;
                break;
            }
        }

        if(possible == false) break;
    }

    if(possible == true){
        return ans;
    }

    for(int p = 0; p < N; p++){
        count[S[arr[p]-1]-'a'][arr[p]] = 0;
        ans++;
        vector<vector<int>> prefix = count;
        for(int i = 0; i < 26; i++){
            for(int j = 1; j <= N; j++){
                prefix[i][j] = prefix[i][j]+prefix[i][j-1];
            }
        }

        possible = true;
        for(int i = 0; i < Q; i++){
            int l = ranges[i][0];
            int r = ranges[i][1];

            for(int j = 0; j < 26; j++){
                int cnt = prefix[j][r]-prefix[j][l-1];
                if(cnt >= 2) {
                    possible = false;
                    break;
                }
            }

            if(possible == false) break;
        }

        if(possible == true){
            return ans;
        }
    }
  
    return ans;
    
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        int Q;
        cin >> Q;
        string S;
        cin >> S;
        vector<int> arr(N);
        for(int i_arr = 0; i_arr < N; i_arr++)
        {
        	cin >> arr[i_arr];
        }
        vector<vector<int> > ranges(Q, vector<int>(2));
        for (int i_ranges = 0; i_ranges < Q; i_ranges++)
        {
        	for(int j_ranges = 0; j_ranges < 2; j_ranges++)
        	{
        		cin >> ranges[i_ranges][j_ranges];
        	}
        }

        int out_;
        out_ = goodString(N, Q, S, arr, ranges);
        cout << out_;
        cout << "\n";
    }
}