#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update

#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; // find_by_order(ind), order_of_key(key)

// 011011
// 20 10 9 30 20 19

int maxNumberSaved(int n, vector<int> &magazines, string &cover){
	int maxMazagines = 0, cnt = 0;
	for(int i = 0; i < n; i++){
	    if(cover[i] == '1') cnt++;
	}
	for(int i = 0; i < n-1; i++){
		if(cover[i] == '0' and cover[i+1] == '1'){
			priority_queue<int> pq;
			int j = i+1;
			pq.push(magazines[i]);
			while(cover[j] == '1'){
				pq.push(magazines[j]);
				j++;
			}
			j--;
			int val = j-i;
			for(int k = 0; k < val; k++){
				maxMazagines += pq.top();
				pq.pop();
			}
			while(!pq.empty()){
				pq.pop();
			}
			i = j;
		}
		else if(cover[i] == '1'){
			maxMazagines += magazines[i];
		}
	}
	if(cnt == n) 
	    maxMazagines += magazines[n-1];
	return maxMazagines;
}

void solve(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		string cover;
		cin>>cover;

		vector<int> magazines(n);
		for(int i = 0; i < n; i++){
			cin>>magazines[i];
		}

		cout<<maxNumberSaved(n, magazines, cover)<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
