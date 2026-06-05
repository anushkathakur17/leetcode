// Last updated: 6/5/2026, 9:08:14 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX; //can also take minPrice=prices[0];
        int maxProfit=0;

        for(int price:prices){
            minPrice=min(minPrice,price);

            int profit=price-minPrice;

            maxProfit=max(maxProfit,profit);
        }
        return maxProfit;
    }
};