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


struct List {
	int data;
	List* next;
	List(int val){
		data = val;
		next = NULL;
	}
}*start = NULL;


List* foldAndMerge(List* head){
	int sz = 0;
	List* cur = head;
	while(cur != NULL){
		sz++;
		cur = cur->next;
	}
	cur = head;
	for(int i = 1; i <= sz/2; i++){
		cur = cur->next;
	}
	List* first = head;
	List* sec = cur;
	List* res = new List(-1);
	cur = res;
	for(int i = 0; i < sz/2; i++){
		int val = (first->data)*(sec->data);
		List* temp = new List(val);
		cur->next = temp;
		cur = cur->next;
		first = first->next;
		sec = sec->next;
	}
	return res->next;
}

void solve(){

	// Write your code here
	List* head = NULL;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int val;
		cin>>val;
		List *temp = new List(val);
		if(start == NULL){
			start = head = temp;
		}else{
			head->next = temp;
			head = head->next;
		}
	}
	List* resHead = foldAndMerge(start);
	List* cur = resHead;
	while(cur){
		cout<<cur->data<<" ";
		cur = cur->next;
	}
	cout<<endl;
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}
