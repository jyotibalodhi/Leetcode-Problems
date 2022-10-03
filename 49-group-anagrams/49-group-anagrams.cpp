class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
    
        // hashmap + sorting
        
        int n = str.size();
        
        if(n <2)
            return {str};
        
        unordered_map<string, vector<string>> mp;
        
        for(int i=0;i<n;i++){
            string temp = str[i];
            sort(temp.begin(), temp.end());

            mp[temp].push_back(str[i]);      
        }
        
        vector<vector<string>> res;
        
        for( auto it : mp){
            res.push_back(it.second);
        }
        
        return res;
    }
};