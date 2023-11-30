class Solution {
public:
    static bool cmp(pair<int,int>&a,pair<int,int>&b)
    {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int,int>>fp(m.begin(),m.end());
        sort(fp.begin(),fp.end(),cmp);
        for(auto i:fp)
        {
            if(k<=0)
            break;
            ans.push_back(i.first);
            k--;
            
        }
        return ans;
    }
};