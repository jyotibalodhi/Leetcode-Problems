class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp;
    for (int i = 0; i < list1.size(); i++) {
        if (mp[list1[i]] < 1) {
            mp[list1[i]] += i + 1;
        }
    }
    int min_sum = 2000;
    vector<string> min_sum_items;
    for (int i = 0; i < list2.size(); i++) {
        if (mp[list2[i]] > 0) {
            mp[list2[i]] += i + 1;
            if (mp[list2[i]] == min_sum) {
                min_sum_items.push_back(list2[i]);
            }
            else if (mp[list2[i]] < min_sum) {
                min_sum_items = {};
                min_sum = mp[list2[i]];
                min_sum_items.push_back(list2[i]);
            }
        }
    }
    return min_sum_items;
}
};