class Solution {
public:
    int finalValueAfterOperations(vector<string>& opr) {
        int x=0;
        for(int i=0;i<opr.size();i++){
            if(opr[i]=="--X" || opr[i]=="X--")
                x--;
            else if(opr[i]=="X++" || opr[i]=="++X")
                x++;
        }
        return x;
    }
};