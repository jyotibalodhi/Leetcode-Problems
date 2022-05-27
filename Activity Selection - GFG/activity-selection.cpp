// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:

 int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int,int>> vp;
        
        for(int i=0; i<n; i++){
            vp.push_back(make_pair(start[i], end[i]));
        }


        sort(vp.begin(), vp.end(), [](auto x, auto y) {return x.second<y.second;});

        int last_f = vp[0].second;
        int ans=1;

        for(int i=1;i<n;i++){
            if(vp[i].first>last_f){
                last_f=vp[i].second;
                ans++;
            }
        }
        return ans;
    }
};
// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends