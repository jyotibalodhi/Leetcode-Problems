class Solution {
public:
    string reverseWords(string s) {
    string word;
        
    vector<string> vec;
    stringstream str(s);
        
    while (str >> word){
        vec.push_back(word);
    }
     
        
        s="";
        
        for(int i=vec.size()-1;i>0;i--){
            s += vec[i];
            s += " ";
        }
        
        s += vec[0];
        
        return s;
    }
};