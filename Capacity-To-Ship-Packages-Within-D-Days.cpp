1class Solution {
2public:
3    int shipWithinDays(vector<int>& weights, int days) {
4
5       int min_cap = 0, max_cap = 0;
6
7       for(int x:weights)
8       {
9        min_cap = max(min_cap,x);
10        max_cap+=x;
11       }
12
13       while(min_cap<max_cap)
14       {
15         int mid = min_cap + (max_cap-min_cap)/2;
16        
17         //trying to ship with mid capacity
18
19         int day = 1;
20         int sum = 0;
21
22         for(int w:weights)
23         {
24            if((sum+w)>mid)
25            {
26                day++;
27                sum=0;
28            }
29            sum+=w;
30         }
31
32         //more day req?
33         if(day>days)
34            min_cap = mid+1;
35        else
36            max_cap = mid;
37
38       }
39        
40        return min_cap;
41    }
42};