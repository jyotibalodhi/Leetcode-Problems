class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        int boat=0;
        sort(p.begin(), p.end());
        
        int s=0, e= p.size()-1;
        
        while(s<e){
            if(p[e]==limit){
                boat++;
                e--;
            }
            else if(p[e]+p[s]<= limit) {
                boat++;
                e--;
                s++;
            }
            else{
                boat++;;
                e--;
            }
        }
        if(s==e) boat++;
        
        return boat;
    }
};