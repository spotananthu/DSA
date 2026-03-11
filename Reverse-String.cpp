1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        
5        int sz = s.size()-1;
6        int front = 0,tmp=0;
7        int back = sz;
8
9        while(front<back)
10        {
11            tmp =  s[front];
12            s[front] = s[back];
13            s[back] = tmp;
14
15            front++;back--;
16        } 
17    }
18};