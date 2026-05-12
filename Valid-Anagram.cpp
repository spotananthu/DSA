1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4
5        if(s.size()!=t.size())
6            return false;
7
8        int count[26] = {0};
9
10        for(char c: s)
11            count[c - 'a']++;
12        
13        for(char d: t)
14            count[d - 'a']--;
15
16        for(int x: count)
17            if(x!=0)
18                return false;
19
20        return true;
21        
22    }
23};