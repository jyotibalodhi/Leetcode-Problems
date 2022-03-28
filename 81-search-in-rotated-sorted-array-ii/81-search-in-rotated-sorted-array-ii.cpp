class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        if(nums.size() ==1){
            if(nums[0]==target) return true;
            else return false;
        }
        
        int n=nums.size()-1;
        int l1=0,l2=0,u1=n,u2=n;
        
        
        for(int i=0;i<n;i++){
            if(nums[i+1]<nums[i]){
                u1=i;
                l2=i+1;
                break;
            }
        }
            

        if(nums[u1]< target && nums[u2]< target)
            return false;
         if(nums[l1]> target && nums[l2]> target)
            return false;
        
        if(target<=nums[u1] && target>=nums[l1]){
            while(l1<=u1){
                int mid= l1+(u1-l1)/2;
                
                if(nums[mid]==target) return true;
                if(nums[mid]<target) l1=mid+1;
                else{ u1=mid-1;}
            }
        }
        
         if(target<=nums[u2] && target>=nums[l2]){
            while(l2<=u2){
                int mid= l2+(u2-l2)/2;
                
                if(nums[mid]==target) return true;
                if(nums[mid]<target) l2=mid+1;
                else{ u2=mid-1;}
            }
        }
        
        
    return false;
    }
};