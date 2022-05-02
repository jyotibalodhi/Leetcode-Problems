class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& n) {
        int p1=0,p2= n.size()-1;
        
        while(p1<p2){
            if(n[p1] % 2 ==0) p1++;
            else{
                if(n[p2]%2 ==0){
                    swap(n[p1],n[p2]);
                    p1++;
                    p2--;
                }
                else{
                    p2--;
                }
            }
        }
        
        return n;
    }
};