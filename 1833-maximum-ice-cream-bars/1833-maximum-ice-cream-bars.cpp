class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int mx = *max_element(costs.begin(), costs.end());
        vector<int> cnt(mx + 1, 0);
        for (int c : costs) cnt[c]++;

        int result = 0;
        for (int price = 1; price <= mx && coins >= price; price++) {
            int take = min(cnt[price], coins / price);
            result += take;
            coins -= take * price;
        }
        return result;
    }
};