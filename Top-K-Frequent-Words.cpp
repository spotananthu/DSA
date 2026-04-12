1class Solution {
2public:
3    vector<string> topKFrequent(vector<string>& words, int k) {
4
5        unordered_map<string,int> mp;
6
7        for(auto x: words)
8            mp[x]++;
9
10        
11        auto cmp = [](pair<int,string>&a, pair<int,string>&b)
12        {
13            if(a.first!=b.first)
14                return a.first < b.first;
15            
16            return b.second < a.second;
17        };
18
19
20        using T = pair<int,string>;
21        priority_queue<T, vector<T> , decltype(cmp)> pq(cmp);
22
23        for(auto x: mp)
24            pq.push({x.second,x.first});
25
26        vector<string> ans;
27
28        while(k--)
29        {
30            ans.push_back(pq.top().second);
31            pq.pop();
32        }
33
34        return ans;
35        
36    }
37};
38