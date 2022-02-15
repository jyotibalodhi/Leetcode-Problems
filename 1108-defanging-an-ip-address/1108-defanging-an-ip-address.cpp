class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.length();
        vector<char> add;
        for(int i=0;i<n;i++){
            if(address[i]=='.')
               { add.push_back('[');
                add.push_back('.');
                add.push_back(']');
               }
            else{     
                add.push_back(address[i]);
            }
        }
        string res(add.begin(),add.end());
        return res;
    }
};