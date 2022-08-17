class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> freq;
        
        for(int i=0;i<words.size();i++){
            string str = "";
            for(int j=0;j<words[i].size();j++){
                 str += morse[words[i][j]-'a'];
            }
            
            freq.insert(str);
        }
        
        return freq.size();
    }
};