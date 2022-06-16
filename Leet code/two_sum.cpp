// question link : https://leetcode.com/problems/two-sum/
#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     vector<int>nums;
//     int target;
//     void twoSum(vector<int> nums, int target) {
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
//         for(int i = 0 ; i <= result.size(); ++i){
//         cout << result[i] << " ";
//         }   
//     }
// };

class Solution {
public:
    vector<int> nums;
    int target;

    void twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        map<int,int> m;
        
        for(int i=0;i<n;i++) {
            m[nums[i]] = i;
        }
        
        for(int i=0;i<n;i++) {
            int tar = target - nums[i];
            if(m[tar] && m[tar] != i) {
                ans.push_back(i);
                ans.push_back(m[tar]);
                break;
            }
        }
        for(int i = 0 ; i <= ans.size() ; ++i){
            cout << ans[i] <<" ";   
        }
    }
};

int main(){
    // vector<int>nums;
    Solution s;
    // s.nums;
    s.target = 9;
    // s.nums;

    for(int i = 0 ; i <= 3 ; ++i){
        int x;
        cin >> x;
        s.nums.push_back(x);
    }
    
    s.twoSum(s.nums , s.target);

    
    

    // for(int i = 0 ; i <= 3 ; ++i){
    //     cout << nums[i] << " ";
    // }
    
    
    // cout << twoSum(s,s);
}


// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].