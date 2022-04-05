class Solution {
public:
    int maxArea(vector<int>& arr) {
       int s=0;
        int e=arr.size()-1;
        int maxArea=INT_MIN;
        int area;
        int h,l;
        
        
        while(s<e){
            h = arr[s]<=arr[e] ? arr[s] : arr[e];
            l=e-s;
            area= l*h;

            if(area > maxArea)
                maxArea =area;
            
            if(arr[s]<=arr[e])
                s++;
            else if(arr[e]<arr[s])
                e--;
        }
        
        return maxArea;
    }
};