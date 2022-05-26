// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    
    bool static cmp(vector<int> &m1, vector<int> &m2){
        if(m1[1] < m2[1])  return true;
        else if(m1[1] > m2[1]) return false;
        else if(m1[2] < m2[2]) return true;
        return false;
    }
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        vector<vector<int>> vec(n, vector<int> (3));
        
        for(int i=0;i<n;i++){
            vec[i][0] = start[i];
            vec[i][1] = end[i];
            vec[i][2] = i+1;
        }
        
        sort(vec.begin(),vec.end(),cmp);
        
        int count=1; // minimum 1 meeting can always occur
        int endLimit = vec[0][1];  //end time of first meeting
        
        for(int i=1;i<n;i++){
            if(vec[i][0] > endLimit){
                count++;
                endLimit = vec[i][1];
            }
        }
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends