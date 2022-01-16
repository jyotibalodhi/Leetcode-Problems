class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x= digits.size()-1;
        vector<int> res;
            res= digits;
        if(res[x]>=0 && res[x]<=8){
            res[x]+=1;
            return res;
        }
        int carry=1;
        int sum=0, i=x;
        sum=res[x]+carry;
        
        while(sum>9){
            res[i]=0;
            carry=1;
            if(i==0){
                res.insert(res.begin(),1);
                return res;
            }
            i--;
            sum=res[i]+carry; 
            }
        res[i]=sum;
        return res;
        
    }
};