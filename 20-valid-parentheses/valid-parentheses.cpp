class Solution {
public:
    bool isValid(string s) {
        
        stack<int> st;

        for(char x:s)
        {
            if((x=='{')||(x=='[')||(x=='('))
                st.push(x); 

            else
            {
                if(st.empty())
                    return false;
                
                char top = st.top();
            
            if(x == ')' && top != '(') return false;
            if(x == ']' && top != '[') return false;
            if(x == '}' && top != '{') return false;

            st.pop();
            }       
        }
        
        return st.empty();

    }
};