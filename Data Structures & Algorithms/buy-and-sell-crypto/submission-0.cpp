class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<low){
                low=prices[i];
            }
            maxprofit=max(maxprofit,prices[i]-low);
        }
        return maxprofit;
    }
};
