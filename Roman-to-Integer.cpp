1class Solution {
2public:
3    int romanToInt(string s) {
4        
5        unordered_map<char,int> map;
6        map['I'] = 1;
7        map['V'] = 5;
8        map['X'] = 10;
9        map['L'] = 50;
10        map['C'] = 100;
11        map['D'] = 500;
12        map['M'] = 1000;
13
14        int res = 0;
15
16        for(int i=0;i<s.size();++i)
17        {
18            if(i>0 && map[s[i]] > map[s[i-1]])
19                res+=map[s[i]] - 2*map[s[i-1]];
20            else
21                res+=map[s[i]]; //map.get(s.charAt(i));
22        }
23
24        return res;
25    }
26};