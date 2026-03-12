1class Solution {
2public:
3    int maxSubarraySumCircular(vector<int>& nums) {
4
5        double maxVal = -DBL_MAX, minVal = DBL_MAX;
6        double arr_sum = 0;
7
8        double temp_maxVal =0, temp_minVal =0;
9
10        for(int i=0; i<nums.size();++i)
11        {
12            arr_sum+=nums[i];
13            
14            //max Kedane
15            temp_maxVal+=nums[i];
16            maxVal = max(maxVal,temp_maxVal);
17            if(temp_maxVal<0) temp_maxVal = 0;
18
19            //min Kedane
20            temp_minVal+=nums[i];
21            minVal = min(minVal,temp_minVal);
22            if(temp_minVal>0) temp_minVal=0;
23        }
24
25        if(arr_sum == minVal) return maxVal;
26
27        return max(maxVal,(arr_sum-minVal));
28        
29    }
30};