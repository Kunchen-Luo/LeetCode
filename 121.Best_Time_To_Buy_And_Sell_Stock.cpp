#include <vector>
#include <algorithm>
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minprice = 1e9, maxprofit = 0;
        for(int price: prices) {
            minprice = std::min(minprice, price);
            maxprofit = std::max(maxprofit, price - minprice);
        }
        return maxprofit;
    }
};