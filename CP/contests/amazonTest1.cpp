#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define mod 1000000007
#define f first
#define s second
#define inf 1e9

vector<int> findDataLocation(vector<int> location, vector<int> moved_from, vector<int> moved_to){
	int n = location.size();
	int m = moved_to.size();
	
	unordered_map<int, int> ump;
	for(int i = m-1; i >= 0; i--){
		if(ump[moved_to[i]] != 0){
			ump[moved_from[i]] = ump[moved_to[i]];
			continue;
		}
		ump[moved_from[i]] = moved_to[i];
	}

	for(int i = 0; i < n; i++){
		if(ump[location[i]] != 0){
			location[i] = ump[location[i]];
		}
	}

	sort(location.begin(), location.end());
	return location;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;

	vector<int> location(n);
	for(int i = 0 ; i < n; i++){
		cin>>location[i];
	}

	int m;
	cin>>m;

	vector<int> moved_from(m);
	for(int i = 0; i < m; i++){
		cin>>moved_from[i];
	}

	vector<int> moved_to(m);
	for(int i = 0; i < m; i++){
		cin>>moved_to[i];
	}

	vector<int> vec = findDataLocation(location, moved_from, moved_to);
	for(int i = 0; i < n; i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;

	return 0;
}