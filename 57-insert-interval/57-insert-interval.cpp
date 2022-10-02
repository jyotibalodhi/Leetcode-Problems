class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newInter) {
        
        int n = inter.size();
        
        vector<vector<int>> res;
        
        
        for(int i=0;i<n;i++){
            
            if(inter[i][1]< newInter[0]){          // newInter strictly > inter
                res.push_back(inter[i]);
            }
            else if(inter[i][0] > newInter[1]){    // newInter strictly < inter
                res.push_back(newInter);
                newInter = inter[i];
            }
            else{                                  // overlapping intervals
                newInter[0] = min(newInter[0], inter[i][0]);
                newInter[1] = max(newInter[1], inter[i][1]);
            }
        }
        
        res.push_back(newInter);
        return res;
    }
};