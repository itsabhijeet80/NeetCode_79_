//1st Way- Better (Using onordered_set),TC-O(N)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>chars;
        int left=0,right=0,ans=0;
        for(int right=0;right<s.size();right++)
        {
            if(chars.find(s[right])==s.end())
            {
                right++;
                ans=max(ans,right-left+1);
            }
            else{
                while(chars.find(s[right])!=s.end())
                {
                    chars.erase(s[left]);
                    left++;
                }
                chars.insert(s[right]);
            }
        }
        return ans;
    }
};

//2nd Way- Best (Using Unordered_map),TC-O(N)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_map<char,int>m;
        vector<int>m(256,-1);//can't initialize with zero bcz 0 can be an index;
        int left=0,right=0;
        int ans=0;
        while(right<s.size())
        {
            if(m[s[right]]!=-1)
            left=max(m[s[right]]+1,left);
            m[s[right]]=right;

            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};