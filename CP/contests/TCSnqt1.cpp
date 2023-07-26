#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int step = 1;
    for(int i = 0; i < 2*n-1; i++){
        for(int j = 0; j < 2*n-1; j++){
            if(i == j || j == 2*n-2-i){
                // cout<<j<<endl;
                cout<<step<<" ";
            }else{
                cout<<"  ";
            }
        }
        if(i < n-1)step++;
        else step--;
        cout<<"\n";
    }

    return 0;
}