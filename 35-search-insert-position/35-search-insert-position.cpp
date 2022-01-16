class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int mid, ul=arr.size()-1, ll=0;
        
        if(target>arr[ul]) return arr.size();
        if(target<arr[ll]) return 0;
        while(ll<ul){
            
            if(ul == ll+1 && arr[ll]!=target){
                return ul;
            }
            mid= floor((ul+ll)/2);
            if(target==arr[mid])
                return mid;
            else if(target==arr[ul])
                return ul;
            else if(target== arr[ll])
                return ll;
            else if(target<arr[mid]){
                ul=mid;        
            }
            else if(target>arr[mid]){
                ll=mid;
            }
        }

     return ul;   
    }
};