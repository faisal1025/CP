#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvb vector<vector<bool>>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

bool sortcol(const vector<int>& v1, const vector<int>& v2)
	{
	    return v1[1] < v2[1];
	}

	void solve(){

		// Write your code here
		int t;
		cin>>t;

		while(t--){
			int n, m;
			cin>>n>>m;

			vvi arrs(m, vector<int>(3));

			for(int i = 1; i <= m; i++){
				int x, w;
				cin>>x>>w;

				vector<int> arr = {w, x, i};
				arrs[i-1] = arr;
			}

			sort(arrs.begin(), arrs.end());
			int sum = 0;
			vvi newArr;
			for(int i = 0, j = 2*n-1; i < n; i++, j--){
				sum += arrs[i][0];
				sum += arrs[j][0];
				newArr.push_back(arrs[i]);
				newArr.push_back(arrs[j]);
			}

			sort(newArr.begin(), newArr.end(), sortcol);
			cout<<sum<<"\n";
			for(int i = 0, j = 2*n-1; i < n; i++, j--){
				cout<<newArr[i][2]<<" "<<newArr[j][2]<<"\n";
			}
			cout<<"\n\n"; 
		}
	}

int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
