#include<bits/stdc++.h>
#define ll long long

using namespace std;

const ll INF = 1e18+1; 

void getMinMax(ll heros[], int n, ll &mn, ll &mx, ll find){
	int i = 0, j = n-1;
	while(i <= j){
		int mid = (i+j)/2;
		if(heros[mid] < find){
			i = mid+1;
		}
		else if(heros[mid] > find){
			j = mid-1;
		}
		else{
			i = j = mid;
			break;
		}
	}
	if(j >= 0)  mx = heros[j];
	if(i < n) mn = heros[i];
}

int main(){

	// Write your code here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin>>n;

	ll heros[n];
	for(int i = 0; i < n; i++) cin>>heros[i];

	int m;
	cin>>m;

	ll totalStrength = 0;
	for(int i = 0; i < n; i++){
		totalStrength += heros[i];
	}

	sort(heros, heros+n);


	for(int i = 0; i < m; i++){
		ll ans = 0;
		ll def, att;
		cin>>def>>att;
		ll mn = INF, mx = -INF;
		getMinMax(heros, n, mn, mx, def);
		ll remStrength, coins1, coins2;
		// for mn which is minimum value greater than or equal to def
		
		coins1 = 0;
		remStrength = totalStrength - mn;
		if(att > remStrength){
			coins1 += att - remStrength;
		}
		
		// for mx which is maximum value less than or equal to def
		
		coins2 = def - mx;
		remStrength = totalStrength - mx;
		if(att > remStrength){
			coins2 += att - remStrength;
		}

		if(mn != INF and mx != -INF) ans = min(coins1, coins2);
		else if(mn == INF) ans = coins2;
		else if(mx == -INF) ans = coins1;
		

		cout<<ans<<endl;
	}
	
	return 0;
}
