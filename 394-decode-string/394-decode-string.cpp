class Solution {
public:
    
    
   string repeate(string &str, int n){
       
        string s=str;
        while(n--){
            str+=s;
        }
        return str;
    }
    
    
    string decodeString(string s) {
        stack<pair<int,string>>prev;
        int curr_num=0;
        string currStr="";
        int len=s.size();
        
        for(int i=0;i<len;i++){
            // s[i] is a number
            if(s[i]>='0' && s[i]<='9'){
                curr_num=curr_num*10+ s[i]-'0';
            }
            // s[i] is an alphabet
            else if(s[i]>='a' && s[i]<='z'){
                currStr+=s[i];
            }
            // s[i] is open bracket
            else if(s[i]=='['){
                prev.push({curr_num,currStr});
                curr_num=0;
                currStr="";
            }
            // s[i] is close bracket
            else{
                int prev_num=prev.top().first;
                string prevStr=prev.top().second;
                prev.pop();
                currStr=prevStr+ repeate(currStr,prev_num-1);
            }
        }
        return currStr;
    }
};