class Solution {
public:  
    int i=0,j=1,k;
    void reverseString(vector<char>& s) {
        k=s.size()-j;
        j++;
        if(i>=k) return ;
        swap(s[i++],s[k]);
        reverseString(s);
    }
};