class Solution {
public:
    int minMoves(int target, int md) {
        int count=0;
        while(target !=1){
            if(target %2 ==0 && md>0){
                target /=2;
                md--;
            }
            else if(md==0){
                count += target-1;
                break;
            }
            else{
                target--;
            }
            count++;
        }
        
        return count;
    }
};