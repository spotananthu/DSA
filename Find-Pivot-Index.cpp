1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4
5       int rightSum=0,leftSum=0,val=0;
6       for(int i:nums)
7         rightSum+=i;
8
9       for(int i =0;i<nums.size();++i)
10       {
11            val = nums[i];
12            
13            rightSum-=val;
14            
15            if(leftSum==rightSum)
16                return i;
17
18            leftSum+=val;
19            
20       }
21
22       return -1;
23        
24    }
25};