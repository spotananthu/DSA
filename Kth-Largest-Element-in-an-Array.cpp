1class Solution {
2public:
3    int findKthLargest(vector<int>& nums, int k) {
4
5        priority_queue<int> pq;
6
7        for(int i =0; i<nums.size();++i)
8            pq.push(nums[i]);
9
10        while(--k)
11            pq.pop();
12
13        return pq.top();       
14    }
15};