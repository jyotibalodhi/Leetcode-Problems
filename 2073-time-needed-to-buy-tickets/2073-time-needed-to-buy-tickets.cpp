class Solution {
public:
    int timeRequiredToBuy(vector<int>& tic, int k) {
        queue<int> que;
        
        for(int i=0;i<tic.size();i++){
            que.push(i);
        }
        int count=0;
        
        while(tic[k]>0){
            int i=que.front();
            count++;
            if(tic[i]!=0){
                tic[i]--;
                if(tic[i]==0){
                    que.pop();
                    continue;
                }
                else{
                    int val=que.front();
                    que.pop();
                    que.push(val);
                }
            }
        }
        
        return count;
    }
};