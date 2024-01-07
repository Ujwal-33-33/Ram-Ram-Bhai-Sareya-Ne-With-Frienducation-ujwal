class Solution {
public:
    int maxProfit(vector<int>& prices) {
int mini = 1e9;
int max = 0;
        while(min < max || prices.size()){
        int mini = min_element(prices.begin(), prices.end()) - prices.begin();
        int maxi = max_element(prices.begin(), prices.end()) - prices.begin();
        if(mini > maxi){
            prices.erase(prices.begin()+min)
        }
        }
    }
};
