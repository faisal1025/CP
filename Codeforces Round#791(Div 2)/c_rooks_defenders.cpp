#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, q;
	cin>>n>>q;
	vector<int> row(n+1, 0);
	vector<int> col(n+1, 0);
	set<int> rowst;
	set<int> colst;
	for(int i = 1; i < n+1; i++){
		rowst.insert(i);
		colst.insert(i);
	}

	while(q--){
		int type;
		cin>>type;

		if(type == 1){
			int x, y;
			cin>>x>>y;
			row[x] += 1;
			col[y] += 1;
			rowst.erase(x);
			colst.erase(y);
		}
		else if(type == 2){
			int x, y;
			cin>>x>>y;
			row[x] -= 1;
			col[y] -= 1;
			if(row[x] == 0) 
				rowst.insert(x);
			if(col[y] == 0)
				colst.insert(y);
		}
		else if(type == 3){
			int x1, y1, x2, y2;
			cin>>x1>>y1>>x2>>y2;

			bool isAttackable = false;
			auto it = rowst.lower_bound(x1);
			if(it == rowst.end()){
				isAttackable = true;
			}			
			else if(it != rowst.end()){
				if(x1 <= *it and *it <= x2){
					isAttackable = false;
				}else{
					isAttackable = true;
				}
			}
			if(isAttackable){
				cout<<"Yes\n";
				continue;
			}

			it = colst.lower_bound(y1);

			if(it == colst.end()){
				isAttackable = true;
			}
			else if(it != colst.end()){
				if(y1 <= *it and *it <= y2){
					isAttackable = false;
				}else{
					isAttackable = true;
				}
			}
			if(isAttackable) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	

	return 0;
}
