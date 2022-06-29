class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b){
        
        if(a[0]== b[0] )    // if height same ascending order of second value
            return a[1] < b[1];
        
        return a[0] > b[0];   // descending order
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {

        // sorting people in decreasing order of their height
        sort(p.begin(),p.end(),compare);
        
        vector<vector<int>> res;
        
        for(int i=0;i<p.size();i++){
            
            int ind = p[i][1];
            res.insert(res.begin()+ind, p[i]);
        }
        
        return res;
        
    }
};