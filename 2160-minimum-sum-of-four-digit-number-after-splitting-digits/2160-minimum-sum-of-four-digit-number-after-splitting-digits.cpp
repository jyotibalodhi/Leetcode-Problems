class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits;
        
        int temp=num;
        int rem;
        
        while(temp>0){
            rem =temp%10;
            digits.push_back(rem);
            temp=temp/10;
        }
        
        sort(digits.begin(), digits.end());
        
    
    int res= (10*digits[0] +digits[2]) + (10*digits[1] +digits[3]);
    
    return res;
        
        
    }
};