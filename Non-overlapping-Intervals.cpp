1class Solution {
2public:
3    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
4
5        sort(intervals.begin(),intervals.end(),
6        [](vector<int>&a , vector<int>&b)
7        {
8         return a[1]<b[1];
9        });
10
11        int count = 0;
12        int end = intervals[0][1];
13        
14        for(int i = 1; i<intervals.size();++i)
15        {
16            if(intervals[i][0] < end) count++;
17
18            else end = intervals[i][1];
19        }
20
21        return count;
22        
23    }
24};