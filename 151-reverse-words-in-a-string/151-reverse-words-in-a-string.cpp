class Solution {
public:
    string reverseWords(string s) {
    string word;
        
    vector<string> vec;
    stringstream str(s);
        
    while (str >> word){
        vec.push_back(word);
    }
     
        reverse(vec.begin(),vec.end());
        
        s="";
        
        for(int i=0;i<vec.size()-1;i++){
            s += vec[i];
            s += " ";
        }
        
        s += vec[vec.size()-1];
        
        return s;
    }
};