class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;

        for(int x:nums)
        {
            mp[x]++;
        }

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        for(auto pair: mp)
        {
            pq.push({pair.second, pair.first});

            if(pq.size() > k)
             pq.pop();
        }

        vector<int> result;

        while(!pq.empty())
        {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};
