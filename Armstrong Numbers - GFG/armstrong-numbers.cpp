// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
	int sum=0, num=n,temp;
	while(num>0){
	    temp=num%10;
		sum += pow(temp,3);
		num=num/10;

		
	}
	
string res;
	if(sum==n)
	res="Yes";
	else
	res= "No";

	return res;
	
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends