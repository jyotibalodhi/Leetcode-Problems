class Solution {
public:
    int findTheWinner(int n, int k) {
        if(n==1) return 1;
        
        queue<int> q;
        
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        
        while(q.size()!=1){
            int val=1;
            while(val<k){
                int a= q.front();
                q.pop();
                q.push(a);
                val++;
            }
            q.pop();            
        }
        
        return q.front();
    }
};