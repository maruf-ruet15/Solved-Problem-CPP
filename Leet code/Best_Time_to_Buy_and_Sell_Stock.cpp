//link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include<bits/stdc++.h>
using namespace std;
// int maxProfit_broutforce(vector<int>& prices,int max) {
//     // max = 0 ;
//         for(int i = 0 ; i<= prices.size()-1 ; ++i){
//             int profit = 0;
//             for(int j= i+1 ; j<= prices.size()-1 ; ++j){
//                 profit = prices[j] - prices[i];
//                 // cout << profit;
//                 if(profit > max){
//                     max = profit;
//                 }
//             }
//             // cout << endl;
//         }
//         return max;
//         // return max;
        
//}


            // O(n) solution
//--------------------------------------------------

int maxProfit_optimal(vector<int>& prices){
    int min_value = INT_MAX;
    int max_profit = 0;
    int n = prices.size();
    for(int i = 0 ; i <=n-1 ; ++i){
        if(prices[i] < min_value){
            min_value = prices[i];
        }else if(( prices[i]- min_value ) > max_profit){
            max_profit = prices[i] - min_value;
        }
    }
    return max_profit;
} 

int main(){

    // int max = 0;
    // vector<int> prices;
    // for(int i = 0 ; i <= 5 ; ++i){
    //     int x;
    //     cin >> x;
    //     prices.push_back(x);
    // }
    // cout << maxProfit_broutforce(prices,max);



               //O(n) solution
    vector<int> prices;
    for(int i = 0 ; i <= 5 ; ++i){
        int x;
        cin >> x;
        prices.push_back(x);
    }
    cout << maxProfit_optimal(prices);
}
