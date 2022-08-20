class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m+n-2;
        int r = min(n-1,m-1);
        
        double res =1.0;
        
        for(int i=1;i<=r;i++){
            res = res * (N-r+i)/i;
        }
        
        return (int)res;
    }
};