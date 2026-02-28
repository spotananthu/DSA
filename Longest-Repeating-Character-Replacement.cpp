1class Solution {
2public:
3int characterReplacement(string s, int k) {
4    int freq[26] = {0};
5    int maxFreq = 0, maxLen = 0, l = 0;
6
7    for(int r = 0; r < s.size(); r++) {
8
9
10        freq[s[r] - 'A']++;
11        maxFreq = max(maxFreq, freq[s[r] - 'A']);
12
13
14        if((r - l + 1) - maxFreq > k) {
15            freq[s[l] - 'A']--;
16            l++;
17        }
18
19        maxLen = max(maxLen, r - l + 1);
20    }
21
22    return maxLen;
23}
24};