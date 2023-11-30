class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        // tolower();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=97&&s[i]<=122 || s[i]>=48 &&s[i]<=57)
            ss+=s[i];
        }
        // cout<<ss;
        int i=0,j=ss.length()-1;
        while(i<j)
        {
            if(ss[i]!=ss[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
};