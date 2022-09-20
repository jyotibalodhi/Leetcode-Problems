class Solution {
public:
     void dfs(vector<vector<int>>& a,int n,vector<bool> &vis,int in,int &c)
    {
        if(vis[in])
            return;
        
        vis[in]=1;
        c++;
        
        for(int i=0;i<n;i++)
        {
            if(i!=in && !vis[i] && a[i][0]==a[in][0] || a[i][1]==a[in][1])
                dfs(a,n,vis,i,c);
        }
        
    }
    
    int removeStones(vector<vector<int>>& a) {
        int i,j,n=a.size();
        int ans=0;
        vector<bool> vis(n,0);
        
        for(i=0;i<n;i++)
        {
            if(!vis[i])
            {
                int c=0;
                dfs(a,n,vis,i,c);
                ans+=c-1;
            }
        }
        
        return ans;      
    }
};