class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       int n=prices.size();
        stack<int> st;
        st.push(prices[n-1]);
        for(int i=n-2;i>=0;--i){
            int check=prices[i];
        if(check>=st.top()){
            prices[i]-=st.top();
            st.push(check);
        }
        else{
            while(!st.empty() && st.top()>check){
                st.pop();
        }
        if(!st.empty()){
            prices[i]-=st.top();
        }
        st.push(check);
    }
 }
    return prices;
    
}
};