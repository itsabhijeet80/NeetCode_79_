class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mini)
            mini=prices[i];
            else
            {
                maxProfit=max(maxProfit,prices[i]-mini);
            }
        }
        return maxProfit;
    }
};