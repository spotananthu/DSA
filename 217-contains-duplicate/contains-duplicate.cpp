class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> value;
        for(int x: nums)
        {
            if(value.count(x))
                return true;
        value.insert(x);
        }
        return false;
    }
};