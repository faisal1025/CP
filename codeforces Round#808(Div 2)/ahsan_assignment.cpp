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

int diff_with_reversed_number(int input1){
	int temp = input1;
	int ans = 0;
	while(temp){
		int dig = temp%10;
		ans = ans*10+dig;
		temp /= 10;
	}

	return abs(input1-ans);
}


int isprime(int num){
	for(int i = 2; i*i <= num; i++){
		if(num%i == 0) return 0;
	}
	return 1;
}

int append_to_reach_nearest_prime(int input1[], int input2){
	int sum = 0;
	for(int i = 0; i < input2; i++){
		sum += input1[i];
	}
	int cnt = 0;
	while(!isprime(sum)){
		cnt += 1;
		sum += 1;
	}
	return cnt;
}

void solve(){

	// Write your code here
	int t;
	cin>>t;
	while(t--){
		int input2;
		cin>>input2;

		int input1[input2];
		for(int i = 0; i < input2; i++){cin>>input1[i];}

		cout<<append_to_reach_nearest_prime(input1, input2)<<endl;
	}
}	


int main(){
	
	// for fast io
	FAST_IO

	solve();
	

	return 0;
}

