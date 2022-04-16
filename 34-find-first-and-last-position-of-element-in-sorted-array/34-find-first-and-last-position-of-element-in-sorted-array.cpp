class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        
        vector<int> res(2,-1);
        int l=0, u=nums.size()-1;
        
        while(l<=u){
            int mid=l+(u-l)/2;
            
            if(nums[mid]==t){
                //for lower bound
                    int i=mid;
                    while(i-1 >=0 && nums[i-1]==t){
                        i--;
                    }
                   res[0]=i;
                
                //for upper bound
                i=mid;
                     while(i+1 <= nums.size()-1 && nums[i+1]==t){
                        i++;
                    }
                        res[1]=i;
                break;
                    
                }
            
            else if(nums[mid]<t){
                l=mid+1;
            }
            else if(nums[mid]>t){
                u=mid-1;
            }
        }
        
        return res;
    }
};