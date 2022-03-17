class Solution {
public:
    int memo[31]={0};
    int fib(int n) {
        if(n==0 ||n==1)
            return n;
        if(memo[n]) 
            return memo[n];
        
        return memo[n]= fib(n-2)+fib(n-1);
    }
};