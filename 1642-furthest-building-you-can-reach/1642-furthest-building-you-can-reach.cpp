class Solution {
public:
    int furthestBuilding(vector<int>& h, int bricks, int ladders) {
        int n= h.size();
        
        int i=0;
        int diff =0; // height diff of two buildings
        
        
        priority_queue<int,vector<int>> pq;
        
        for(i=0;i<n-1;i++){
            
            diff = h[i+1]- h[i];
            
            if(diff <= 0){
                continue;
            }
            
            // larger buildng ahead
            
            bricks -= diff;
            pq.push(diff);   // bricks used
            
            if(bricks <0){   // not enough bricks
                bricks += pq.top();
                pq.pop();
                ladders--;
            }
            
            if(ladders < 0) break;
        }
        
        return i;
    }
};