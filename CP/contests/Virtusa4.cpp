#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair<int, int>
#define mod 1000000007
#define f first
#define s second
#define inf 1e9

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	cin>>s;

	int n = s.length();
	int sum = 0, num = 0;
	for(int i = 0; i < n; i++){
		while(i < n and isdigit(s[i])){
			num = (num*10) + (s[i]-'0');
			i++;
		}
		if(num != 0){
			sum += num;
			num = 0;
		}
	}
	cout<<sum<<endl;
	return 0;
}