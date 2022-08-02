class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        
//         priority_queue<int, vector<int>> pq;  //max heap
//         int n = mat.size();
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 pq.push(mat[i][j]);
//                 if(pq.size() >k){
//                     pq.pop();
//                 }
//             }
//         }
        
//         return pq.top();
        
        int n = mat.size();
        int count =0,temp;
        
        int low = mat[0][0];  //smallest element
        int high = mat[n-1][n-1];  // largest element
        
        while(low < high){
            int mid = low + (high - low)/2;
            
             temp = n - 1;
             count = 0;
            
            // For each row count the elements that are smaller than mid
            for(int i = 0; i < n; i++){
                
                while(temp >= 0 && mat[i][temp] > mid){
                    temp--;
                }
                count+= (temp+1);
            }
            
            if(count <k) low = mid +1;  //need more larger elements
            else 
                high = mid;
            
        }
        
        return low;
    }
};
