class Solution {
public:
    
    void solve(int n, int &k, vector<int> &ans, int num){
        
        if(n==0){
            ans.push_back(num);
            return;
        }
        
        
        for(int i=0;i<10;i++){
            
            if(abs((num%10) - i)==k)
                solve(n-1,k,ans, num*10+i);
        }
        
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
                
        vector<int> ans;
        
        for(int i=1;i<=9;i++){
            solve(n-1,k,ans,i);
        }
        
        return ans;
    }
};