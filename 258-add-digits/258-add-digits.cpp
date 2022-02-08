class Solution {
public:
    int sum;
    int addDigits(int num) {
        sum=0;
        int rem=0;
        if(num/10==0) return num;
        
        while(num>0){
            rem=num%10;
            sum+=rem;
            num=num/10;
        }
        if(sum/10==0)
            return sum;
        else
            addDigits(sum);
        
        return sum;
    }
};