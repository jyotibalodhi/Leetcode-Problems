class Solution {
public:
    
    static bool compare(vector<int> &a, vector<int> &b){
        return a[1] > b[1];
    }
    
    int maximumUnits(vector<vector<int>>& arr, int size) {
        
        sort(arr.begin(),arr.end(),compare);

        
        int boxes=0;
        int units=0;

        for(int i=0;i<arr.size();i++){
            
                int numBoxes = min(size, arr[i][0]);
                units += numBoxes * arr[i][1];
                size -= numBoxes;
        }
        
        
        return units;
    }
};