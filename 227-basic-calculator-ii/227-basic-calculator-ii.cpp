class Solution {
public:
      bool isDigit(char ch)
    {
        return ch >= '0' && ch <= '9';
    }
    int calculate(string s) {
        stack<int>st;
        char op = '+';
        s += '+';
        long n = s.size(), res = 0, num = 0;

        for(int i = 0; i < n; ++i)
        {
            if(s[i] == ' ')
                continue;
            if(isDigit(s[i]))
            {
                num = num * 10 + s[i] - '0'; 
            }
            else
            {
                if(op == '+') st.push(num);
                else if(op == '-') st.push(num * -1);
                else
                {
                    int x = st.top();
                    st.pop();
                    if(op == '*') st.push(x * num);
                    else st.push(x / num);
                }
                op = s[i];
                num = 0;
            }
        }
        
        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }
        return res;
    }
};