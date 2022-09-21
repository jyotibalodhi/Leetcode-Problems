class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         
        int len1 = s1.length();
        int len2 = s2.length();
        
        if(len1 > len2)
            return false;
        
        // check if an anagram of s1 is present in s2
        
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(int i=0;i<len1;i++){
            mp1[s1[i]]++;
        }

        int i= 0;
        int j =0;
        
        while(j < len2){
            mp2[s2[j]]++;
            
            if(j-i+1 < len1){
                j++;
            }
            else if(j-i+1 == len1){
                
                if(mp1 == mp2)
                    return true;
                
                mp2[s2[i]]--;
                if(mp2[s2[i]] == 0)
                    mp2.erase(s2[i]);
                
                i++;
                j++;
            }
        }
        
        return false;
    }
};