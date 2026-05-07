1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        
5
6        unordered_map<int,int> map;
7
8        for(int i=0;i<nums.size();++i)
9        {
10            int need = target - nums[i];
11
12            if(map.count(need))
13                return{map[need],i};
14            map[nums[i]] = i;
15        }
16
17        return{};
18    }
19};