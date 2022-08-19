class Solution {
public:
    bool isPossible(vector<int>& nums) {
        
        unordered_map<int,int> freq;
        unordered_map<int,int> seq;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        
        
        for(auto x: nums){
            
            if(freq[x]==0)
                continue;
            
            if(seq[x-1] >0)  //already ending seq at x-1
            {
                freq[x]--;
                seq[x-1]--;
                seq[x]++;   //now the new seq ends at x 
            }
            else{
                
                if(freq[x+1]==0 || freq[x+2]==0)  //no elements on right to form seq
                    return false;
                
                freq[x]--;
                freq[x+1]--;
                freq[x+2]--;
                seq[x+2]++;
            }
            
        }
        
        return true;
    }
};