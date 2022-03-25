class Solution {
public:
    int minPartitions(string n) {
       char max='0';
        
        for(auto c: n) 
            if(c > max) 
                max =c;
        
        return max - '0';
    }
};