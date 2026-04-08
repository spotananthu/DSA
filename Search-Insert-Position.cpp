1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        
5        int l=0,ans=0;
6        int r=nums.size()-1;
7
8        while(l<=r)
9        {
10            int mid = l+(r-l)/2;
11
12            if(nums[mid] >= target)
13                r = mid-1;
14            else
15                l=mid+1;
16
17
18        }
19
20        return l;
21    }
22};