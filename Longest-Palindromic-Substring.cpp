1class Solution {
2        
3        int resultStart = 0;
4        int resultLength = 0;
5public:
6    string longestPalindrome(string s) {
7
8        int n = s.size();
9
10        if(n<2)
11            return s;
12
13        for(int i=0; i<n-1; ++i)
14        {
15            expandRange(s,i,i);
16            expandRange(s,i,i+1);
17        }
18
19        return s.substr(resultStart, resultLength);
20        
21    }
22
23    private: void expandRange(string &s, int begin, int end)
24    {
25        while(
26            begin >= 0 &&
27            end < s.size() &&
28            s[begin] == s[end]
29        )
30        {
31            begin--; end++;
32        }
33
34        if(end - begin - 1 > resultLength)
35        {
36            resultStart = begin + 1;
37            resultLength = end - begin - 1;
38        }
39    }
40};