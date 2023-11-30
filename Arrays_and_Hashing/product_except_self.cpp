class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1;
        int n=nums.size();
        vector<int>left(n);
        vector<int>right(n);
        vector<int>ans(n);
        
        left[0]=1,right[nums.size()-1]=1;
        for(int i=1;i<nums.size();i++)
        {
            left[i]=left[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]=right[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=left[i]*right[i];
        }
        return ans;
    }
};