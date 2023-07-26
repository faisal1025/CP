#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define mod 1000000007
#define f first
#define s second
#define inf 1e9

vector<long long> solve(vector<vector<int>> &A, vector<vector<int>> &B){
	unordered_map<int, vector<int> > ump;
	long long totalMonster = 0;
	for(auto monster: A){
		for(int i = monster[0]; i <= monster[1]; i++){
			ump[i].push_back(monster[2]);
			totalMonster++;
		}
	}
	int n = B.size();
	vector<long long> result(n);
	for(int j = 0; j < B.size(); j++){
		int position = B[j][0];
		int strength = B[j][1];
		for(auto st : ump[position]){
			if(st <= strength) totalMonster--;
		}
		result[j] = totalMonster;
	}
	return result;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	

	return 0;
}