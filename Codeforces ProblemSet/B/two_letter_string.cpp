#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	// Write your code here

	/*
	* This problm is a good implementation of map. 
	* We will use here 2 Sum approach in which we have to find all the pairs having sum equal to x.
	* This is a very good technique i am glad to learn this technique from leetcode.
	* Thanks Allah for this technique.
	*/

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;
	
		vector<string> strings(n);

		for(int i = 0; i < n; i++){
			cin>>strings[i];
		}

		map<string, int> mp;
		ll cnt = 0;
		for(int i = 0; i < n; i++){
			string curr = strings[i];

			for(int j = 0; j < 2; j++){
				char ch = curr[j];
				for(int z = 0; z < 11; z++){
					if('a'+z == ch) continue;

					curr[j] = 'a'+z;
					if(mp.find(curr) != mp.end()){
						cnt += mp[curr];
					}
				}
				curr[j] = ch;
			}

			mp[curr] += 1;
		}

		cout<<cnt<<endl;
	}
	

	return 0;
}

