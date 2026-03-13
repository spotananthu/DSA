1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4
5        unordered_map<int,int> mp;
6        int presum =0, count =0;
7        mp[0] = 1;
8
9        for(int i=0;i<nums.size();++i)
10        {
11            
12            presum+=nums[i];
13            int remove=presum-k;
14            count+=mp[remove];
15
16            mp[presum]+=1;
17
18        }
19
20        return count;
21        
22    }
23};