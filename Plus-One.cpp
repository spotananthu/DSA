1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4
5        int n = digits.size();
6        for(int i=n-1; i>=0; --i)
7        {
8            if(digits[i]<9)
9            {
10                digits[i]++;
11                return digits;
12            }
13            else
14                digits[i] = 0;
15        }
16
17        digits.insert(digits.begin(),1);
18
19    return digits;
20
21    }
22};