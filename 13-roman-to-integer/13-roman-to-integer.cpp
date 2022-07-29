class Solution {
public:
    int val(char c){
        if(c=='I') return 1;
        else if(c=='V') return 5;
        else if(c=='X') return 10;
        else if(c=='L') return 50;
        else if(c=='C') return 100;
        else if(c=='D') return 500;
        else return 1000;
    }
    int romanToInt(string s) {
        
        char prev=s[0];  //store previous character to compare.
        int number=val(prev);   //add first roman letter value.
        
        for(int i=1;i<s.length();i++){  //compare prev with others and change prev.
            if(val(prev)>=val(s[i])){  //if decreasing or equal order found...i.e., XXVII
                number+=val(s[i]);   //just add that letter value.
            }
            else{ 
                //if increasing order found...i.e., __IV__ or __IX__ etc.
                //since in previous we have added the first letter of increasing order so we need to remove it(-val(prev)).
                //then we need to add (second letter of increasing order value - value of first letter)
                //so in total we need to add ..(second letter val - (2*prev letter val))
                number+=val(s[i])-(2*val(prev));
            }
            prev=s[i];  //change prev.
        }
        return number;
    }
};