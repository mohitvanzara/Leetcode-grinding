class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int MaxProfit = 0;
        int mini = prices[0];
        for(int i =1;i<prices.size();i++){
            int profit = prices[i]-mini;
            MaxProfit = max(MaxProfit,profit);
            mini = min(mini,prices[i]);
        }
        return MaxProfit;
       
        
    }
};