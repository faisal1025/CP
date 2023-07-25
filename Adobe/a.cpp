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

vector<long> solution(vector<long> array){
	int n = array.size();
	vector<long> res;
	vector<long> even;
	vector<long> odd;

	for(int i = 0; i < n; i++){
		if(i % 2){
			odd.push_back(array[i]);
		}else{
			even.push_back(array[i]);
		}
	}

	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());
	int ind1 = 0, ind2 = 0;
	for(int i = 0; i < n; i++){
		if(i%2){
			res.push_back(odd[ind2++]);
		}else{
			res.push_back(even[ind1++]);
		}
	}
	return res;
}

void solve(){

	// Write your code here
	int n;
	cin>>n;

	vector<long> arr(n);
	for(int i = 0; i < n; i++)
		cin>>arr[i];

	vector<long> res = solution(arr);
	for(int i = 0; i < n; i++){
		cout<<res[i]<<" ";
	}
	cout<<"\n";
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
