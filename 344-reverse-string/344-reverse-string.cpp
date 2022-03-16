class Solution {
public:
    int i=0;
    void reverseString(vector<char>& s,int j=-1) {
        if(j==-1) j=s.size()-1;
        
        if(i==j || i>j) return;
        
        swap(s[i++],s[j--]);
        reverseString(s,j);
    }
};