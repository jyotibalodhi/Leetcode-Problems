class Solution {
public:
    
    bool isPossible(vector<int> matchsticks, int target,vector<int> &res, int idx){
        
        if(idx == matchsticks.size()){
            return (res[0] == res[1] && res[1] == res[2] && res[2] == res[3]);
        }
        
        for(int i=0;i<4;i++){
            
            if(res[i] + matchsticks[idx] > target){
                continue;
            }
            
            int j = i-1;
            
            while(j>=0){
                
                if(res[i] == res[j]) break;
                
                j--;
                
            }
            
            if(j != -1)
                continue;
            
            
            res[i] += matchsticks[idx];
            
            if(isPossible(matchsticks,target,res,idx+1)) return true;
            
            res[i] -= matchsticks[idx];
            
        }
        return false;
    }
    
    
    
    bool makesquare(vector<int>& matchsticks) {
        

        if(matchsticks.size() == 0)
            return 0;
        
        int sum = accumulate(matchsticks.begin(),matchsticks.end(),0);
            
        vector<int> sides(4,0);
        
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        
        return isPossible(matchsticks,sum/4,sides,0);
        
    }
};