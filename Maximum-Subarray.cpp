1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        
5        double temp_maxVal =0;
6        double maxVal = -DBL_MAX;
7        for(int i=0;i<nums.size();++i)
8        {
9
10            temp_maxVal+=nums[i];
11            maxVal = max(maxVal,temp_maxVal);
12            if(temp_maxVal<0) temp_maxVal =0;
13        }
14
15        return maxVal;
16    }
17};