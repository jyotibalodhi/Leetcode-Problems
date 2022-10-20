class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> freq;
        
        for(int i=0;i<magazine.size();i++){           
            freq[magazine[i]]++;
        }
        
        for(int i =0;i<ransomNote.size();i++){
            if(freq.find(ransomNote[i]) == freq.end()){
                return false;
            }
            freq[ransomNote[i]]--;
               if(freq[ransomNote[i]] == 0){
                   freq.erase(ransomNote[i]);
               }
        }
        
        return true;
    }
};