/*
Problem Statement - 

In this question is a very good application of GCD as well as combinatorics where we have to
find the total number of permutation in which 
							gcd(1.a[i], 2.a[i+1], ...., n.a[n-1]) > 1
For example -
for n = 4;
2 1 4 3
Explaination - gcd(1.2, 2.1, 3.4, 4.3) > 1 [valid permutation]
2 3 4 1
Explaination - gcd(1.2, 2.3, 3.4, 4.1) > 1 [valid permutation]
4 1 2 3
Explaination - gcd(1.4, 2.1, 3.2, 4.3) > 1 [valid permutation]
4 3 2 1
Explaination - gcd(1.4, 2.3, 3.2, 4.1) > 1 [valid permutation]

thus, total number permutations whose gcd > 1 is 4.

Approach -

GCD of a sequence will always be greater than 1 if and only if all the numbers in that sequence 
must be greater than 1 and even.

so, we will arrange the numbers such that (even element * odd position)
or (odd element * even position) so that the number always be even because [even*odd = even]. 

total permutation = even numbers permutation arrangement * odd numbers permutation arrangement
*/

#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int mod = 998244353;

ll fact(int num){
	if (num == 1) return num;

	return ((num%mod)*(fact(num-1)%mod))%mod;
}

int main(){

	// Write your code here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2 != 0){
			cout<<0<<"\n";
		}else{
			ll perm = fact(n/2);
			perm = ((perm%mod)*(perm%mod))%mod;
			cout<<perm<<"\n";
		}
	}
	
	return 0;
}
