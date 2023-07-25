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

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    vector<int> left(n);
    stack<int> st;
    for(int i = 0; i < n; i++){
        while(!st.empty() and heights[st.top()] >= heights[i]){
            st.pop();
        }
        if(st.empty()){
            left[i] = 0;
        }else{
            left[i] = st.top()+1;
        }
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }
    vector<int> right(n);
    for(int i = n-1; i >= 0; i--){
        while(!st.empty() and heights[st.top()] >= heights[i]){
            st.pop();
        }
        if(st.empty()){
            right[i] = n-1;
        }else{
            right[i] = st.top()-1;
        }
        st.push(i);
    }
    long long int mxArea = 0;
    for(int i = 0; i < n; i++){
        long long int length = heights[i];
        long long int width = (right[i]-left[i])+1;
        mxArea = max(mxArea, length*width);
    }
    return mxArea;
}

void solve(){

	int n;
	cin>>n;

	vector<int> arr(n);
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	cout<<largestRectangleArea(arr);
	
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
