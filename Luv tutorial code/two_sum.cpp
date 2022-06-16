// question link : https://leetcode.com/problems/two-sum/
#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> mp;
//         vector<int> result;
//         for(int i = 0 ; i <= nums.size() ; ++i){
//             if(mp.find(nums[i]) == mp.end()){
//                 mp[nums[i]] = i;
//             }
//             if((mp.find(target-nums[i]) != mp.end() )  &&  (i != mp[target - nums[i]]) ){
//                 result.push_back(i);
//                 result.push_back(mp[target-nums[i]]);
//                 break;
//             } 
//         }
//         return result;   
//     }
// };

int main(){
    vector<int> nums;
     int target = 66;
    for(int i = 0 ; i <= 3 ; ++i){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    for(int i = 0 ; i <= nums.size() ; ++i){
        cout << nums[i];
    }
    
    // Solution s;
    // cout << s.twoSum(nums[i],target);
}


// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].