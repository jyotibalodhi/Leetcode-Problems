class Solution {
public:
    string multiply(string num1, string num2) {
        
        
        if( num1 == "0" || num2 == "0")
            return "0";
        
        
        int carry =0;
        string prod;
        
        for (int pos = 0, e = num1.size() + num2.size() - 1; pos != e; pos++) {
            int result = 0;
            for (int i = 0, j = pos; i < num1.size(); i++, j--) {
                if (j >= num2.size())
                    continue;
                
                int digit1 = num1[num1.size() - i - 1] - '0';
                int digit2 = num2[num2.size() - j - 1] - '0';
                result += digit1 * digit2;
            }
            
            result += carry;
            carry = result / 10;
            result %= 10;
            prod.push_back('0' + result);
        }
        
        if (carry)
            prod.push_back('0' + carry);
        
        reverse(prod.begin(), prod.end());
        return prod;
    }
};