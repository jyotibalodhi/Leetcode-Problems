class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> pq;
        int n=s.size();
        if(n==1) return s[0];
        if(n==2) return abs(s[0]-s[1]);
            
            
        for(int i=0;i<n;i++){
            pq.push(s[i]);
        }
        
        while(pq.size() >1){
            int val= pq.top();
            pq.pop();
            int temp= abs(val-pq.top());
            pq.pop();
            pq.push(temp);

        }
        return pq.top();
    }
};