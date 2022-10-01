class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& ni) {
        
        int n = inter.size();
        
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++){
            
            if(inter[i][1] < ni[0]){
                ans.push_back(inter[i]);
            }
            else if(inter[i][0] > ni[1]){
                ans.push_back(ni);
                ni = inter[i];
            }
            // else if(inter[i][1] >= ni[0] || inter[i][0] <= ni[0]){
            else{
                ni[0] = min(ni[0],inter[i][0]);
                ni[1] = max(ni[1],inter[i][1]);
            }
        }
        
        ans.push_back(ni);
        return ans;
    }
};