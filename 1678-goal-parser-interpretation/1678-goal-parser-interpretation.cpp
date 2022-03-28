class Solution {
public:
    string interpret(string c) {
        string s="";
        int i=0;
        for(int j=0;j<c.length();j++){
            if(c[j]=='G') s+='G';
            else if(c[j]=='(' && c[j+1]==')'){
                s+='o';
                j++;
            }
            else if(c[j]=='(' && c[j+1]=='a'){
                s+= "al";
                j+=3;
            }
        }
        return s;
    }
};