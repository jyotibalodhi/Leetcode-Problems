class Solution {
public:
    string frequencySort(string s) {
        
        int n=s.length();
        if(n==1 || n==2) return s;
        
        unordered_map<char, int> freq;
        priority_queue<pair<int,char>> pq;
        
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        
        for(auto i:freq){
            pq.push(make_pair(i.second,i.first));
        }
        int i=0;
        while(!pq.empty()){
            int len= pq.top().first;
            while(len--){
                s[i++]=pq.top().second;
            }
            pq.pop();
        }
        
        return s;
    }
};