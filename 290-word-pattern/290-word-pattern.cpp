class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string word;
        int i=0,count=0;
        unordered_map<char, string> umap;
        stringstream st(s);
        
 while(st>>word ){
            count++;
        }
        
      if(pattern.size()!= count) return false;
        stringstream iss(s);
        while(iss>>word && i<pattern.length()){
            char key=pattern[i];
            i++;
             if (!umap.count(key))
          { 
                umap[key]=word;
            }
        }
        char key;
        for(i=0 ;i<pattern.size();i++){
           key=pattern[i];
            string val= umap[key];
            for (const auto& element : umap){
                 if (element.second == val && element.first!=key){
                     return false;
                 }
            }
        }

 
        stringstream str(s);
        i=0;
         while(str>>word && i<pattern.length()){
            key=pattern[i];
             
             i++;
             if(word == umap[key]) continue;
             return false;      
        }
        return true;
        
    }
};

