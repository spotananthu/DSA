1class Solution {
2public:
3    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
4
5        // Min heap: {sum, i, j}
6        using T = tuple<int,int,int>;
7        priority_queue<T, vector<T>, greater<T>> pq;
8
9        // Push nums1[i] paired with nums2[0] for first k elements
10        for(int i = 0; i < nums1.size() && i < k; i++)
11        {
12            pq.push({nums1[i] + nums2[0], i, 0});
13        }
14
15        vector<vector<int>> result;
16
17        while(k-- && !pq.empty())
18        {
19            auto [sum, i, j] = pq.top();
20            pq.pop();
21
22            result.push_back({nums1[i], nums2[j]});
23
24            if(j + 1 < nums2.size())
25            {
26                pq.push({nums1[i] + nums2[j+1], i, j+1});
27            }
28        }
29
30        return result;
31    }
32};