class Solution {
	public:
    
   	string longestPalindrome(string s) {   
        
	    int n = s.size();
    	vector<vector<int>> dp(n, vector<int> (n,0));
        
        int strt=0;
    	int end=1;
	
	    for(int i=0;i<n;i++){
	        dp[i][i] = 1;  // making diagonals 1, as single character is                                   always palindrome
    	}
        
	    for(int i=0;i<n-1;i++){
	        if(s[i]==s[i+1]){
    	    	dp[i][i+1]=1;
                
        		strt=i;
                end=2;
       		}
	    }
        
    	for(int j=2;j<n;j++){
	        for(int i=0;i< n-j;i++){  
           		int lft=i;
            	int rght = i+j;
        	    
    	        if(dp[lft+1][rght-1]==1 && s[lft]==s[rght]) 
	            {
                	dp[lft][rght]=1; strt=i; end=j+1; 
            	}        
        	}
    	}
        
    return s.substr(strt, end);
	}
};