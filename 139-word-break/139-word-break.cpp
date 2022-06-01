class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> table(s.size()+1, false);
        table[0] = true;
        
        for(int i=0; i<=s.size(); i++){
            if(table[i]){
                for(auto& word:wordDict){
                    if(s.find(word, i) == i)
                        table[i + word.size()] = true;
                }
            }
        }
        
        return table[s.size()];
    }
};