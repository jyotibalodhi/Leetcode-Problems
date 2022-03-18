class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& sand) {
        int arr[]={0,0};
 
        for(int i=0;i<stu.size();i++){
            arr[stu[i]]++;
        }
        
        int k=0;
        while(k<sand.size()){
            if(arr[sand[k]]>0){
                arr[sand[k]]--;
            }
            else
              { 
                break;
              }
            k++;
            
        }
        return sand.size()-k;
    }
};