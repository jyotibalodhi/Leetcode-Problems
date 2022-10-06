class TimeMap {
    
    // Map 
    unordered_map< string, set<pair<int, string>>>  mp;
    
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
            mp[key].insert({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key) == mp.end()){
            return "";
        }
        
       auto it=mp[key].lower_bound({timestamp+1,""});
        if(it==mp[key].begin())
        {
            return "";
        }
        it--;
        // cout<<it->first<<" ";
        return it->second;
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */