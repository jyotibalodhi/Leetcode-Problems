class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        vector<vector<int>> res(n);
        
        for (int i = 0 ; i < n ; i++) {
           res[i].resize(i+1, 1);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(j==0 ){
                    continue;
                }
                else{
                    res[i][j]= res[i-1][j-1] + res[i-1][j];
                }
            }
        }
        
        return res;
    }
};