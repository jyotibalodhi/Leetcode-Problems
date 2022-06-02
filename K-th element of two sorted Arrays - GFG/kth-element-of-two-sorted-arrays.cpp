// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int a[], int b[], int m, int n, int k)
    {
       priority_queue<int, vector<int>, greater<int> > pq;
      

    for (int i = 0; i < m; i++) {
        pq.push(a[i]);
    }
  
    for (int i = 0; i < n; i++) {
        pq.push(b[i]);
    }
  
    while (k-- > 1) {
        pq.pop();
    }
    return pq.top();
        
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends