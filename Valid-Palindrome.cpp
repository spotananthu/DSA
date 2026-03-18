1class Solution {
2public:
3    bool isPalindrome(string s) {
4
5        int front=0;
6        int back=s.size()-1;
7
8        while(front<back)
9        {
10            while((front<back) && !isalnum(s[front]))
11                front++;
12            while((front<back) && !isalnum(s[back]))
13                back--;
14
15            if(tolower(s[front])!=tolower(s[back]))
16                return false;
17            
18            front++;back--;
19        }
20        
21        return true;
22    }
23};