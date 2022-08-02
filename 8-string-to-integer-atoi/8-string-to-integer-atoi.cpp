class Solution {
public:
    int myAtoi(string str) {
        
        long long int ans =0.0;
        bool neg=false;
        
        int i=0;
        
        while(str[i] == ' ') i++;
        if(str[i]=='-' || str[i]=='+'){  //checking for signs 
            neg = str[i]=='-' ? true : false;
            i++;
        }
        
            while((str[i]-'0')>=0 && (str[i]-'0')<=9) // only add if a number
            {
                ans *= 10;
                ans += (str[i]-'0');

                if(ans > 2147483647)
                {
                    ans = 2147483647;
                    if(neg)
                    {
                        ans *= -1;
                        ans -= 1;
                    }
                    return ans;
                }
                i++;
            }

        if(neg) ans = ans*-1;
        return (int)ans;
    }
};