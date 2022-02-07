class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> umap1;
        unordered_map<char, int> umap2;
        char res;
        for(int i=0;i<s.length();i++){
            umap1[s[i]]++;
        }
         for(int i=0;i<t.length();i++){
            umap2[t[i]]++;
             if(umap2[t[i]]>umap1[t[i]]){
                  res=t[i];
                 break;
             }
        }
        return res;
    }
};