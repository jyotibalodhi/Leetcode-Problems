class Solution {
public:
    
    vector<int> findAnagrams(string s, string p) {
        
       	map<char, int> mp1;
		map<char, int> mp2;
		for(auto it: p)mp1[it]++;

		for(int i = 0; i < p.size(); i++) {
			mp2[s[i]]++;
		} 

		vector<int> ans;

		if(s.length() < p.length()) return ans;

		if(mp1 == mp2) ans.push_back(0);

		for(int i = p.size(); i < s.size(); i++) {

			mp2[s[i]]++;

			if(mp2[s[i-p.size()]] > 1) {
				mp2[s[i-p.size()]]--;
			}
			else if(mp2[s[i-p.size()]] == 1){
				mp2.erase(s[i-p.size()]);
			}

			if(mp2 == mp1) {
				ans.push_back(i-p.size()+1);                
			}
		}

		return ans;
    }
};