1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        
5        if(nums.empty()) return {};
6        int n = nums.size();
7        vector<int> res(n);
8        res[0] = 1;
9
10        for(int i = 1; i< nums.size(); ++i)
11        {
12            res[i] = nums[i-1]*res[i-1]; 
13        }
14
15        int suffix = 1;
16        for(int i = n-1; i >=0 ;--i)
17        {
18            res[i]*=suffix;
19            suffix*=nums[i];
20        }
21
22        return res;
23        
24    }
25};