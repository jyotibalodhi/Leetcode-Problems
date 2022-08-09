class Solution {
public:
    
      struct comp {
        bool operator () (pair<int, string>& a, pair<int, string>& b){
            if(a.first == b.first) return a.second > b.second;
            else return a.first < b.first;
            
        }
    }; 
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        priority_queue<pair<int,string>, vector<pair<int, string>>, comp> frequency;
        sort(words.begin(), words.end());
        
        int count = 1;        
        for(int i=1; i<words.size(); i++){            
            if(words[i] != words[i-1]){
                frequency.push({count, words[i-1]});
                count = 1;
            } else {
                count++;
            }
        }
        
        
        frequency.push({count, words[words.size()-1]});
        
        vector<string> result;
        for(int i=0; i<k; i++){
            result.push_back(frequency.top().second);
            frequency.pop();
        }

        return result;
    }
};