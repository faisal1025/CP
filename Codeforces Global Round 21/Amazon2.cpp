#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], int node, vector<bool> &visited){
    visited[node] = true;

    for(auto child : adj[node]){
        if(!visited[child]){
            dfs(adj, child, visited);
        }
    }
}

void dfsCount(vector<int> adj[], int node, vector<bool> &occupied){
    occupied[node] = true;

    for(auto child : adj[node]){
        if(!occupied[child]){
            dfsCount(adj, child, occupied);
        }
    }
}

int solve (int N, int A, int B, vector<vector<int> > land, vector<vector<int> > water) {
    vector<int> adj[N+1];

    for(int i = 0; i < A; i++){
        int x = land[i][0];
        int y = land[i][1];
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 0; i < B; i++){
        int x = water[i][0];
        int y = water[i][1];
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<bool> visited(N+1, false);
    for(int i = 0; i < B; i++){
        int x = water[i][0];
        int y = water[i][1];
        if(!visited[x])
            dfs(adj, x, visited);
    }

    vector<bool> occupied(N+1, false);
    int ans = 1;
    for(int i = 0; i < A; i++){
        int x = land[i][0];
        int y = land[i][1];
        if(visited[x] == false and occupied[x] == false){
            dfsCount(adj, x, occupied);
        }
    }

    for(int i = 0; i < N+1; i++){
        if(occupied[i] == true) ans++;
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
        int A;
        cin >> A;
        int B;
        cin >> B;
        vector<vector<int> > land(A, vector<int>(2));
        for (int i_land = 0; i_land < A; i_land++)
        {
            for(int j_land = 0; j_land < 2; j_land++)
            {
                cin >> land[i_land][j_land];
            }
        }
        vector<vector<int> > water(B, vector<int>(2));
        for (int i_water = 0; i_water < B; i_water++)
        {
            for(int j_water = 0; j_water < 2; j_water++)
            {
                cin >> water[i_water][j_water];
            }
        }

        int out_;
        out_ = solve(N, A, B, land, water);
        cout << out_;
        cout << "\n";
    }
}