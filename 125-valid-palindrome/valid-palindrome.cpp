class Solution {
public:
    bool isPalindrome(string s) {
        
        string t ;
        string v ;
        for(int i = 0; i <  s.size(); ++i)
        {
            if(!isalnum(s[i]))
                continue;
            else
                t += tolower(s[i]);
        }

        for(int i = s.size()-1; i >= 0; --i)
        {
            if(!isalnum(s[i]))
                continue;
            else
                v += tolower(s[i]);
        }

        if (v==t)
            return true;
        else
            return false;

        
    }
};
