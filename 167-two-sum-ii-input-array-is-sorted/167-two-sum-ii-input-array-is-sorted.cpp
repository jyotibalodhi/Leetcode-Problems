class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int s= 0; 
        int e= arr.size()-1;
        vector<int> res(2);
        while(s<e){
            if(arr[s]+arr[e]== target){
                res[0]=s+1;
                res[1]=e+1;
                break;
            }
            else if(arr[s]+arr[e]> target){
                e--;
            }
            else if(arr[s]+arr[e]< target){
                s++;
            }
        }
        return res;
    }
};