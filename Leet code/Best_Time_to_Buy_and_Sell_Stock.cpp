#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices,int max) {
    // max = 0 ;
        for(int i = 0 ; i<= prices.size()-1 ; ++i){
            int profit = 0;
            for(int j= i+1 ; j<= prices.size()-1 ; ++j){
                profit = prices[j] - prices[i];
                // cout << profit;
                if(profit > max){
                    max = profit;
                }
            }
            // cout << endl;
        }
        return max;
        // return max;
        
}

int main(){
    int max = 0;
    vector<int> prices;
    for(int i = 0 ; i <= 5 ; ++i){
        int x;
        cin >> x;
        prices.push_back(x);
    }
    cout << maxProfit(prices,max);
}

