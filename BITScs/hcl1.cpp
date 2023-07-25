#include<bits/stdc++.h>

using namespace std;

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
    int mxArea = 0;
    for(int i = 0; i < n; i++){
        int length = heights[i];
        int width = (right[i]-left[i])+1;
        mxArea = max(mxArea, length*width);
    }
    return mxArea;
}

void solve(){

	// Write your code here
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
