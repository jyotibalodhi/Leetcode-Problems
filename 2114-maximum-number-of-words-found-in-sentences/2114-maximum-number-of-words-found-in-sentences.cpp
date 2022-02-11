class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        int count=0;
        
        for(int i=0;i<sentences.size();i++){
            stringstream str(sentences[i]);
            string word;
            while(str >> word){
                count++;
            }
            if(count>max) max=count;
            count=0;
        }
        
        return max;
    }
};