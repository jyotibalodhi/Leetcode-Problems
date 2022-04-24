class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i=0,j= n-1;
        
        while(i<j){
            if(arr[i]==arr[j]){
                i++;
                j--;
                continue;
            }
            else if(arr[i]<arr[j]) i++;
            else if(arr[i]>arr[j]) j--;
        }
        
        return i;
    }
};