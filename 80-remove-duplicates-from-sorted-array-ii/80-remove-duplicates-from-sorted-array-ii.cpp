class Solution {
public:
    int removeDuplicates(vector<int>& nums) {        
        int j=0;
     map<int,int> umap;
        
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;       
        }
        for(auto i:umap){
            if(i.second> 2)
                {
                     i.second=2;
             }
                while(i.second>0) 
             {
                nums[j++]=i.first;
                i.second--;
             } 
            }
        

         return j;
    }
};