
class Solution {
public:
  
    vector<vector<int>> merge(vector<vector<int>>& inter) {
        
        vector<vector<int>> res;
        
        int n=inter.size();
        sort(inter.begin(),inter.end());
        
        vector<int> temp=inter[0];
      for( auto i:inter){
          if(i[0]<=temp[1]){
              temp[1]=max(i[1],temp[1]);
          }
          else{
              res.push_back(temp);
              temp=i;       
          }
      }
        
         res.push_back(temp);
        
        return res;
    }
};