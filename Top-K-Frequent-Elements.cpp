1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) {
4
5        unordered_map<int,int> mp;
6
7        for(auto x: nums)
8            mp[x]++;
9
10        
11        using T = pair<int,int>;
12        priority_queue<T, vector<T>> pq;
13
14        for(auto x: mp)
15            pq.push({x.second,x.first});
16
17        vector<int> ans;
18
19        while(k--)
20        {
21            ans.push_back(pq.top().second);
22            pq.pop();
23        }
24
25        return ans;
26
27
28        
29    }
30};