class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n= accounts[0].size();
        int i=0;
        int sum=0,res=0;
       for(int j=0;j<n;j++){
          sum+=accounts[i][j];
            if(sum>res) res=sum;
           if(j==(n-1))
          { 
            cout<<"sum: "<<sum<<endl;
            sum=0;
            j=-1;
            i++;
          }
           if(i==m){
               break;
           }
           
           
       }
        return res;
    }
};