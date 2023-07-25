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

char makeLower(char ch){

	int num;
	if(65 <= ch and ch <= 90){
		num = ch-'A';
	}
	char res = 'a'+num;
	return res;
}

char makeUpper(char ch){
	int num;
	if(97 <= ch and ch <= 122){
		num = ch-'a';
	}
	char res = 'A'+num;
	return res;
}

string modify_variableName(string input1){

	int sz = input1.length();
	bool c, java;
	c = java = false;
	for(int i = 0; i < sz; i++){
		if(input1[i] == '_'){
			c = true;
			break;
		}
		else if(65 <= input1[i] and input1[i] <= 90){
			java = true;
			break;
		}
	}
	string result = "";
	if(sz == 0) return result;
	if(c){
		for(int i = 0; i < sz; i++){
			if(input1[i] == '_'){
				i++;
				result += makeUpper(input1[i]);
			}else{
				result += input1[i];
			}
		}
	}
	if(java){
		for(int i = 0; i < sz; i++){
			if(65 <= input1[i] and input1[i] <= 90){
				result += '_';
				result += makeLower(input1[i]);
			}else{
				result += input1[i];
			}
		}
	}
	return result;
}

void solve(){

	// Write your code here
	string input1;
	cin>>input1;

	cout<<modify_variableName(input1);
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
