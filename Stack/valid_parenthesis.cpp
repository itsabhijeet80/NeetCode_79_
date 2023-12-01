class Solution {
public:
    bool is_pair(char b,char a)
    {
        if((b=='('&&a==')')||(b=='{'&&a=='}')||(b=='['&&a==']'))
        return true;
        return false;
    }
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            st.push(s[i]);
            else
            {
                if(st.empty())
                return false;
                // while(!st.empty())
                {
                    char a=st.top();
                    if(!is_pair(a,s[i]))
                    return false;
                    st.pop();
                }
            }
        }
        if(!st.empty())
        return false;
        return true;
    }
};