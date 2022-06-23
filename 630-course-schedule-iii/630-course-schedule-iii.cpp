class Solution {
public:
    static bool compare(vector<int> v1,vector<int> v2){
        return v1[1] <v2[1];
    }
    
    int scheduleCourse(vector<vector<int>>& vec) {
        
        sort(vec.begin(),vec.end(),compare);

        int sum=0;
        priority_queue<int> pq;
        
        for(int i=0;i<vec.size();i++){
            
            sum += vec[i][0];
            pq.push(vec[i][0]);
            
            if(sum > vec[i][1])   // more tasks than the limit
            {
                sum -= pq.top();
                pq.pop();
            }
        }
           
        return pq.size();
    }
    
};