#include <bits/stdc++.h>
using namespace std;
// string num;
//    void reverse_number(int sum){
//     int rev_num[1];
//     while(sum >0){
//         for(int j = 0 ; j < num.size() ; ++j){
//          rev_num[j] = sum % 10;
//          sum = sum / 10; 
//         }
//         }
//         for(int j = 0 ; j < num.size() ; ++j){
//             cout << rev_num[j];
//         }
        
//     }
    int sum_of_series(int &sum){
        
        for(int i = 1 ; i <=100 ; ++i){
            sum += i;

        }
        return sum;
    }
int main(){
    //reverse
    // reverse_str(int sum){}
    // string str;
    // cin >> str;
    // string reverse_str;
    // for(int i = str.size()-1 ; i >= 0 ; --i){
    //     // reverse_str = reverse_str + str[i];
    //     reverse_str.push_back(str[i]);
    // }
    // cout << reverse_str;



//     sum of number as iteger
   //  string sum_string;
   //  cin >> num;
   //  int sum = 0;
   // for(int i = num.size()-1 ; i >= 0 ; i--){
   //      sum += int(num[i])-'0';
   // }
   // reverse_number(sum);

    //sum of series
    int sum = 0 ;
    cout << sum_of_series(sum);

}