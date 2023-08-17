class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
         // Sort the prices in non-decreasing order
    sort(prices.begin(), prices.end());
   
    return (( money -(prices[0] + prices[1])) >= 0) ? ( money -(prices[0] + prices[1])) : money;
    }
};