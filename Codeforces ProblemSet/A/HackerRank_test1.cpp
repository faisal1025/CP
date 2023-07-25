#include<bits/stdc++.h>
#define ll long long

using namespace std;

void getMin(vector<vector<int>> &houses, int i, int n, int &ans, int curr_ans, int ignore){
	if(i == n){
		ans = min(ans, curr_ans);
		return;
	}

	for(int j = 0; j < 3; j++){
		if(j == ignore) continue;
		getMin(houses, i+1, n, ans, curr_ans+houses[i][j], j);
	}
}

int minCost(vector<vector<int>> &houses){
	int ans = INT_MAX, n = houses.size();
	getMin(houses, 0, n, ans, 0, -1);
	return ans;
}

int main(){

	// Write your code here
	int n;
	cin>>n;
	vector<vector<int>> houses;
	for(int i = 0; i < n; i++){
		vector<int> house(3);
		for(int i = 0; i < 3; i++){
			cin>>house[i];
		}
		houses.push_back(house);
	}

	cout<<minCost(houses)<<endl;
	

	return 0;
}
