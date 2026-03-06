1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4
5    int i = 0, count = 0 , ptr = 0;
6    
7    while(true)
8    {
9        i++;
10        if(ptr<arr.size() && arr[ptr]==i)
11            ptr++;
12        else
13            count++;
14
15    if(count == k)
16        break;
17    }
18
19    return i;
20    }
21};