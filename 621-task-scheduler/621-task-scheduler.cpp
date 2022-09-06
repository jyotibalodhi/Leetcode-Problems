class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
      
        //For all test cases  the maximum time would be the number of tasks or the time              
		//taken by the task which occurs the maximum times
        
        int time=tasks.size();        
        vector<int> counter(26,0);
        
        int maxi=0;
        
        for(int i=0; i<tasks.size(); i++){
            counter[tasks[i]-'A']++;
            maxi=max(maxi,counter[tasks[i]-'A']);
        }
        
        int cntMaxi=0;
        
        for(int i=0; i<26; i++){
            if(counter[i]==maxi){
                cntMaxi++;
            }
        }
        
        // calculating the time taken by task which occurs maximum times
        int ans=maxi+(n*(maxi-1));
        
        // if there are multiple tasks which occurs maximum time we need to adjust the time
        if(cntMaxi>1) ans+=(cntMaxi-1);
        
        //if the time taken by task which occurs maximum time is less then total tasks then               
		//total tasks would be the answer
        ans=max(ans,time);
        
        return ans;
        
    }  
};