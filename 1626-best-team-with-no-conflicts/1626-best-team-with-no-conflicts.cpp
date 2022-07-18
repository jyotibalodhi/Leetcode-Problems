class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        if(a[1] < b[1])
            return true;
        if(a[1] == b[1] && a[0] <= b[0])
            return true;

        return false;
    }

    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        
        int n=scores.size();
        vector<vector<int>> temp(n ,vector<int> (2,0));

        for(int i=0;i<n;i++) {
            temp[i][0] = scores[i];
            temp[i][1] = ages[i];
        }

        sort(temp.begin(),temp.end(), cmp);

        vector<int> dp(n);
        dp[0] = temp[0][0];

        for(int i=1;i<n;i++) {
            
            dp[i] = temp[i][0];
            
            for(int j=0; j<i; j++) {
                
                if(temp[j][1]<=temp[i][1] && temp[j][0] <= temp[i][0]) {
                    dp[i] = max(dp[i], temp[i][0] + dp[j]);
                }
            }
        }

        int mx=INT_MIN;
        for(int i=0;i<n;i++) {
            if(mx < dp[i])
                mx = dp[i];
        }

        return mx;
    }
};