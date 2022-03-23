class Solution {
public:
    int brokenCalc(int x, int y) {
        int res = 0;
        while (x< y) {
            
            if (y % 2) 
                y++;
            
            else 
                y /= 2;
            
            res++;
        }
        return res + x - y;
    }
};