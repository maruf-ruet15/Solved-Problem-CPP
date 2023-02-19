#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string s,t;
    bool isSubsequence(string s, string t) {
        int s_i = 0, t_i = 0;
        
        while (s_i < s.size() && t_i < t.size()) {
            
            if (s[s_i] == t[t_i]){
                s_i++;
            }else{
                t_i++;
            }
                 
        }
        if(s_i == s.size()){
           return 1; 
        }
    }        
};
                       //for loop solution
class Solution {
public:
    string s,t;
    bool isSubsequence(string s, string t) {
        int n = s.length(),m=t.length();
        int j = 0; 

    for (int i = 0; i < m and j < n; i++)
        if (s[j] == t[i])
            j++;
 
    // If all characters of s were found in t
    return (j == n);
    }
};
int main(){
    Solution obj;
    string s,t;
    cin >> s >> t;
    obj.s = s;
    obj.t = t;
    bool result = obj.isSubsequence(obj.s,obj.t); 
    cout << result ;
}