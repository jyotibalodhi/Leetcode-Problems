//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define lli long long int

class Solution {
  public:
  
  lli solve(int coins[], int ind, int sum, vector<vector<lli>> &dp){
      
      // base case
      
     if(ind == 0){
         if(sum % coins[0]== 0)
            return 1;
         return 0;
     }
      
      if(dp[ind][sum] != -1)
        return dp[ind][sum];
      
      lli take =0;
      if(coins[ind] <= sum)
        take = solve(coins, ind, sum-coins[ind],dp);
      
      lli notTake = solve(coins,ind-1,sum,dp);
      
      return dp[ind][sum] = take + notTake;
  }
    long long int count(int coins[], int n, int sum) {

        // code here.

        vector<vector<lli>> dp(n+1, vector<lli> (sum+1,-1));
        
        return solve(coins,n-1,sum,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends