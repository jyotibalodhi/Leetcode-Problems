class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n+1);

        for(int i=0;i<=n;i++){
            if(i==0 || i==1) res[i]=i;
            else{
                int num=i;
                int count=0;
                while(num){
                    count+= num%2;
                    num/=2;
                }
                res[i]=count;
            }
        }
        return res;
    }
};