class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n= accounts[0].size();
        int sum=0,res=0;
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               sum+=accounts[i][j];       
           }
   
          if(sum>res){ res=sum;}
           sum=0;
       }
        return res;
    }
};