// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    
    void solve(vector<int> arr, int n, vector<int> &ans, int sum, int i ){
        
        if(i==n){
            ans.push_back(sum);
            return;
        }
        
        solve(arr, n, ans, sum +arr[i],i+1);
        solve(arr, n, ans, sum,i+1);
    }
    
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        
        solve(arr,N,ans,0,0);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends