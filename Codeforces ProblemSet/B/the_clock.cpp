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

const int mod = 1440;

bool isPalin(int min){
	int h = min/60;
	int m = min%60;
    
	string p = "";
	if(h > 0 and h < 10){
		p += '0';
		p += ('0'+h);
	}
	else if(h == 0){
		p += '0';
		p += '0';
	}
	else{
		while(h){
			int dig = h%10;
			h /= 10;
			p += ('0'+dig);
		}
		reverse(begin(p), end(p));
	}

	string n = "";
	if(m > 0 and m < 10){
		n += '0';
		n += ('0'+m);
	}
	else if(m == 0){
		n += '0';
		n += '0';
	}
	else{
		while(m){
			int dig = m%10;
			m /= 10;
			n += ('0'+dig);
		}
		reverse(begin(n), end(n));
	}

	string temp = p+n;
	
	if(temp[0] == temp[3] and temp[1] == temp[2]){
		return true;
	}
	return false;
}

void solve(){

	// Write your code here
	int t;
	cin>>t;

	while(t--){
		string s;
		cin>>s;
		int x;
		cin>>x;

		string hour = s.substr(0, 2);
		string minute = s.substr(3, 2);
		
		int h = ((hour[0]-'0')*10) + (hour[1]-'0');
		int m = ((minute[0]-'0')*10) + (minute[1]-'0');
		int min = (h*60) + m;

		vector<int> mins;
		mins.push_back(min);
		
		while(((min+x)%mod) != mins[0]){
			min += x;
			mins.push_back(min%mod);
		}

		int cnt = 0;
		for(int i = 0; i < mins.size(); i++){
			if(isPalin(mins[i])){
				cnt++;
			}
		}
		cout<<cnt<<"\n";
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}