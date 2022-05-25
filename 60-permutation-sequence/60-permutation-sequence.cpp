class Solution {
public:
    string getPermutation(int n, int k) {
        
        // mathematical solution
        
        int fact=1;
        vector<int> ds;
        string res="";
        
         // <n not <=n because we want fastorial of n-1 terms
        for(int i=1;i<n;i++){  
            fact *= i;
            ds.push_back(i);
        }
        ds.push_back(n);
        
        k--;   // because we are following 0 indexing
        
        while(true){
            // adding the needed number each time
            res += to_string(ds[k/fact]);
            ds.erase(ds.begin() + k/fact);  //removing the used number
            
            //breaking the loop if all elements are taken
            if(ds.size()==0) break;
            
            k= k%fact;
            fact = fact/ ds.size();
        }
        
        return res;
    }
};