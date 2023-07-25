/*
Understanding Question:
1. We are given dimensions of a 2-D matrix n X k.
2. We have to make a matrix such that it contain the number between 1 to n*k .
3. Such that average of each row of matrix must be an integer.

Important points:
1. We have to know this fact that the average of all the numbers in a row will be integer 
only if all the number in that row will be all odd or all even.

eg. 1 3 5 7
    2 4 6 8

In this matrix average of all the numbers in a row will be Integer (1+3+5+7) / 4 = 16/4 = 4

YES CONDITION - This Combination can be done if and only if product of n*k is even(means
equal number even numbers and equal number of odd numbers) as well as n is even.

NO CONDITION - Otherwise It can't be possible.
*/


#include<bits/stdc++.h>

using namespace std;

void print(int r, int c, vector<vector<int>> &ans){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        if(k == 1){ // edge case
            cout<<"YES\n";
            int num = 1;
            for(int i = 1; i <= n and num <= n*k; i++){
                for(int j = 1; j <= k; j++){
                    cout<<num<<" ";
                    num++;
                }
                cout<<"\n";
            }
            continue;
        }

        if(n % 2 != 0){
            cout<<"NO\n";
            continue;
        }

        cout<<"YES\n";
        int num = 1;
        for(int i = 1; i <= n/2 and num <= n*k; i++){
            for(int j = 1; j <= k; j++){
                cout<<num<<" ";
                num += 2;
            }
            cout<<"\n";
        }

        num = 2;
        for(int i = 1; i <= n/2 and num <= n*k; i++){
            for(int j = 1; j <= k; j++){
                cout<<num<<" ";
                num += 2;
            }
            cout<<"\n";
        }
        
    }
    return 0;
}