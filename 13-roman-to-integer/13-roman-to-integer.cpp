class Solution {
public:
    
    int value(char ch){
        switch(ch){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        
        return 0;
    }
    
    int romanToInt(string s) {
        
        int val = value(s[0]);
        int prev = value(s[0]);
        
        int n = s.length();
        
        for(int i=1;i<n;i++){
            int curr = value(s[i]);
            
            if(curr <= prev){
                val += curr;
            }
            else{
                val = val + curr -(2*prev);
            }
            
            prev = curr;
        }
        
        return val;
    }
};