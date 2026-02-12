class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        string key="";
        for(string x:strs)
        {
            key = x;
            sort(key.begin(),key.end());
            mp[key].push_back(x);
        }

        vector<vector<string>> result;
        for(auto pair:mp)
        {
            result.push_back(pair.second);
        }

        return result;
    }
};