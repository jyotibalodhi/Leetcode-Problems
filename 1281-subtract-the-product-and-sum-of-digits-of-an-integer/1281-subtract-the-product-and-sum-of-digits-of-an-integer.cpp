class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pro=1;
        
        while(n){
            int rem= n%10;
            sum+=rem;
            pro*=rem;
            n=n/10;
        }
        
        return pro-sum;
    }
};