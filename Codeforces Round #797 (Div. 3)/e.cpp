// Sample code to read input and write output:

/*
#include <iostream>

using namespace std;

int main() 
{
	char name[20];
	cin >> name;                     // Read input from STDIN
	cout << "Hello " << name;        // Write output to STDOUT
	return 0;
}
*/

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

#include <iostream>
#include<vector>

using namespace std;

int main()
{
	// Write your code here
	int n;
	cin>>n;
	
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		cin>>arr[i];
		
	int sum = 0;
	
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	
	int ans = -1;
	if(sum % n == 0){
		int each = sum/n;
		for(int i = 0; i < n; i++){
			if(arr[i] > each){
				ans += arr[i]-each;
			}
		}
		ans += 1;
	}
	cout<<ans<<"\n";
	return 0;
}