class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0,maxm=0;
        for(int i=0;i<prices.size()-1;i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[i]<prices[j])
                diff=prices[j]-prices[i];
                maxm=max(maxm,diff);
            }
        }
        return maxm;
    }
};
