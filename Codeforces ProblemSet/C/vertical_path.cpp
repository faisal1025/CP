#include<bits/stdc++.h>
#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

class Solution{
private:
	void getParent(int ind, vector<int> &parent, vector<int> &visited, vector<int> &path){

		path.push_back(ind);
		visited[ind] = 1;

		if(visited[parent[ind]]){
			return;
		}else{
			getParent(parent[ind], parent, visited, path);
		}
	}

public:
	void solve(){

		// Write your code here
		int t;
		cin>>t;
		while(t--){
			int n;
			cin>>n;
			vector<int> parent(n+1);
			for(int i = 1; i <= n; i++)cin>>parent[i];

			set<int> st;
			for(int i = 1; i <= n; i++) st.insert(i);

			for(int i = 1; i <= n; i++){
				st.erase(parent[i]);
			}
			vector<int> visited(n+1, 0);
			vvi paths;
			vector<int> path;
			
			if(n == 1) {
				path.push_back(1);
				paths.push_back(path);
			}
			
			for(auto leaf : st) {
				path.clear();
				getParent(leaf, parent, visited, path);
 				reverse(begin(path), end(path));
				paths.push_back(path);
			}

			int m = paths.size();
			cout<<m<<endl;
			for(int i = 0; i < m; i++){
				cout<<paths[i].size()<<endl;
				for(auto p : paths[i]){
					cout<<p<<" ";
				}
				cout<<endl;
			}
			cout<<"\n\n";
		}
	}	
};

int main(){
	
	// for fast io
	FAST_IO

	Solution obj;
	obj.solve();
	

	return 0;
}
