1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4
5        double pre = 1, suff = 1, maxVal = -DBL_MAX;
6        int n = nums.size();
7
8        for(int i =0; i<n;++i)
9        {
10            if(pre==0)  pre =1;
11            if(suff==0) suff=1;
12
13            pre*=nums[i];
14            suff*=nums[n-i-1];
15
16            maxVal = max(maxVal,max(pre,suff));
17        }
18
19        return maxVal;
20    }
21};