class Solution {
public:
    string getSmallestString(int n, int k) {
       string s="";
        for(int i=0;i<n;i++){
            s+='a';           
        }
        
        k=k-n;
         for(int i=n-1;i>=0;i--){
            if(k<=25){
                s[i]='a'+k;
                k=0;
            }
             else{
                 s[i]='a'+25;
                 k-=25;
             }
             
             if(k==0) break;
        }
       
        
        return s;
    }
};