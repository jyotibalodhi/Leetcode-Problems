class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int sum=0;
        int half= arr.size() /2;
        unordered_map<int,int> freq;
        priority_queue<int> pq;
        
        
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
            if(freq[arr[i]]==half) return 1;
        }
        
        int prev=0; 
        
        for(auto i:freq){
            pq.push(i.second);
        }

        int i=0;
        while(!pq.empty()){
            int top= pq.top();
            if(prev >=half) {
                pq.pop();
            }
            else{
                sum++;
                prev+=pq.top();
                pq.pop();
            }
        }
        
        return sum;
        
    }
};