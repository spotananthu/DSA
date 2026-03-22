1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        
5       vector<vector <int>> rs;
6       sort(nums.begin(),nums.end());
7
8       for(int i=0; i<=nums.size()-1; ++i)
9       {    
10            if(i>0 && nums[i] == nums[i-1])
11                continue;
12        
13            int left = i+1;
14            int right = nums.size()-1;
15
16            while(left<right)
17            {
18                int sum = nums[i]+ nums[left]+ nums[right];
19                if(sum == 0)
20                {
21                    rs.push_back({nums[i], nums[left], nums[right]});
22
23                    while(left<right&&nums[left]==nums[left+1])
24                        left++;
25                    while(left<right&&nums[right]==nums[right-1])
26                        right--;
27
28                    left++;
29                    right--;
30                }
31                else if(sum<0)
32                    left++;
33                else
34                    right--;
35            }   
36
37       }
38            return rs;
39    }
40};
41