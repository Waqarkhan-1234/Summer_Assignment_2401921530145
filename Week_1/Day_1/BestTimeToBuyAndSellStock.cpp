#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxProfit = 0;

        while(right < prices.size()) {
            if(prices[right] > prices[left]) {
                int profit = prices[right] - prices[left];
                maxProfit = std::max(maxProfit, profit);
            }
            else {
                left = right;
            }
            right++;
        }

        return maxProfit;
    }
};