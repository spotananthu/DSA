1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        
5        long long sum = 0;
6        long long maxi = LONG_MIN;
7        for(int i=0;i<nums.size();++i)
8        {
9            sum+=nums[i];
10
11            if(sum > maxi)
12                maxi = sum;
13
14            if(sum<0)
15                sum = 0;
16        }
17
18            return maxi;
19    }
20
21};