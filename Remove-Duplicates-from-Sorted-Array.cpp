1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int left =0;
5
6        if(nums.empty()) return 0;
7
8        for(int i=1;i<nums.size();++i)
9        {
10            if(nums[left]!=nums[i])
11                nums[++left] = nums[i];
12        }
13
14        return left+1;
15    }
16};