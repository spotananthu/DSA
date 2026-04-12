1class Solution {
2public:
3    string frequencySort(string s) {
4
5        unordered_map<char,int> mp;
6
7        for(auto x: s)
8            mp[x]++;
9
10        
11        using T = pair<int,char>;
12        priority_queue<T,vector<T>> pq;
13
14        for(auto x : mp)
15            pq.push({x.second, x.first});
16
17        string ans = "";
18
19        while(!pq.empty())
20        {
21            
22            auto[freq,chara] = pq.top();
23            pq.pop();
24
25            ans+=string(freq,chara);
26        }
27
28        return ans;
29        
30    }
31};