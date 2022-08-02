#define ll long long

class Solution {
public:
    int reverse(int x) {
        if(x == INT_MIN || x == INT_MAX)
            return 0;
        
        ll ans =0.0;
        int temp = x;
        
        while(x){
            int rem = x%10;
            ans = ans*10 + rem;
            x = x/10;
        }
        
        
        if(ans > INT_MAX || ans < INT_MIN) 
            return 0;
        
        return (int)ans;
    }
};