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

void subsetsUtil(int A[], int n, vector<vector<int> >& res,
                 vector<int>& subset, int index)
{
    res.push_back(subset);
    for (int i = index; i < n; i++){
        subset.push_back(A[i]);
        subsetsUtil(A, n, res, subset, i + 1);
  
       
        subset.pop_back();
    }
  
    return;
}
  
vector<vector<int> > subsets(int A[], int n)
{
    vector<int> subset;
    vector<vector<int> > res;
    int index = 0;
    subsetsUtil(A, n, res, subset, index);
  
    return res;
}

int IsSumPossible(int arr[], int n, int x){

	vector<vector<int>> res = subsets(arr, n);

	long long int sum = 0;
	int sz = res.size();
	for(int i = 0; i < sz; i++){
		sum = 0;
		int sz1 = res[i].size();
		for(int j = 0; j < sz1; j++){
			sum += res[i][j];
		}
		if(sum == x){return 1;}
	}
	return 0;
}

void solve(){

	// Write your code here
	int n, x;
	cin>>n>>x;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	cout<<IsSumPossible(arr, n, x);
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
