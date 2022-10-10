class Solution {
public:
    int merge(vector<int>& nums, int low,int mid, int high,vector<int> &temp){
        int cnt=0;
        int j=mid+1;
        
     
     //counting reverse pairs
        for(int i=low;i<=mid;i++){
            while(j<=high && nums[i] > 2LL * nums[j]){
                j++;
            }
            
            cnt += (j-(mid+1));
        }
        
        int l=low,r=mid+1;
     int k = low;
     //sorting
       while(l<=mid && r<=high){
           if(nums[l]<=nums[r]) temp[k++] = nums[l++];
           else
               temp[k++]= nums[r++];
       }
        
        while(l<=mid){
            temp[k++] = nums[l++];
        }
        
        while(r<=high){
            temp[k++]= nums[r++];
        }
        
        for (int i = low; i <= high; i++) {
             nums[i] = temp[i];
        }
        return cnt;

    }
    
    int mergeSort(vector<int>& nums, int low, int high, vector<int> &temp){
        if(low >=high)  return 0;
        
        int mid = (low +(high -low) /2);
        
        int count = mergeSort(nums, low, mid,temp);
        count += mergeSort(nums, mid+1,high,temp);
        count += merge(nums,low, mid, high,temp);
        
        return count;
    }
    
    int reversePairs(vector<int>& nums) {
        
        
        int n = nums.size();
        
        vector<int> temp(n);
        return mergeSort(nums, 0,nums.size()-1,temp);
    }
};