1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4
5        int l=0;
6        int r=nums.size()-1;
7
8        while(l<=r)
9        {
10            int mid = l+(r-l)/2;
11            
12            if(target>nums[mid])
13                l=mid+1;
14            else if(target<nums[mid])
15                r=mid-1;
16            else if(target==nums[mid])
17                return mid;
18
19        }
20
21        return -1;
22        
23    }
24};