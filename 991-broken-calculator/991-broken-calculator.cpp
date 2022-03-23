class Solution {
public:
    int brokenCalc(int x, int y) {
        int ans=0;
        
        while(x!=y){
            if(y<=x){
                ans = ans + (x-y); 
                break;
            }
            else{
                if(y % 2!=0) {
                    y++;
                    ans++;
                }
                y = y/2;
                ans++;
        }
       }
            
    return ans;
    }
};