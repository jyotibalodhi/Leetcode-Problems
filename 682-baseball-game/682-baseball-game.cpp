class Solution {
public:
    int calPoints(vector<string>& ops) {
 int n = ops.size() ; 
        vector<int> res; 
        
        for(int i =0;i<n;i++){
            if(ops[i]=="D"){
                int val3 = 2*res.back() ; 
                res.push_back(val3);
                
            }
            else if(ops[i]=="C"){
                res.pop_back(); 
                
            }
            else if(ops[i]=="+"){
                int val1 = res.back();
                res.pop_back(); 
                int val2 = res.back(); 
                res.push_back(val1) ; 
                res.push_back ( val1+val2);
            }
            else{
                res.push_back(stoi(ops[i])) ; 
            }
    
        }
        int sum  = 0 ; 
        for(auto x:res){
            
            sum+=x ;
        }
        return sum ; 
    }
};
