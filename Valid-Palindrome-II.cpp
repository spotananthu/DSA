1class Solution {
2public:
3    bool ispal(string& s, int front, int back)
4    {
5        while(front < back)
6        {
7            if(s[front] != s[back])
8                return false;    
9            front++;
10            back--;
11        }
12        return true;
13    }
14
15    bool validPalindrome(string s) {
16
17        int front = 0;
18        int back  = s.size() - 1;
19
20        while(front < back)
21        {
22            if(s[front] != s[back])
23            {
24                return ispal(s, front+1, back) ||
25                       ispal(s, front, back-1);
26            }
27            front++;
28            back--;
29        }
30
31        return true;
32    }
33};
34