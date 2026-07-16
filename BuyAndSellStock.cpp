#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int maxProfit(vector<int>& prices) {
        int p= prices.size();
        int maxProfit = 0;
        int bestBuy = prices[0];

        for(int i=0; i<p; i++) {
            if(bestBuy < prices[i]) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    };

    int main() {
        vector<int> prices = {7,2,1,8};
        for(int i=0; i<prices.size(); i++) {
        maxProfit(prices);
        }
        cout<<"Max Profit = "<<maxProfit<<endl;
        return 0;
    }
