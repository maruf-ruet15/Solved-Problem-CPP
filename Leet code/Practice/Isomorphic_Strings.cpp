#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // string s,t;
    // int isIsomorphic(string s, string t) {
    //     // if(s.size()!=t.size())
    //     // {
    //     //     return 0;
    //     // }
    //     char map_s[128]={0};
    //     char map_t[128]={0};
    //     int length=s.size();
    //     for(int i=0;i<length;i++)
    //     {
    //         if(map_s[s[i]]!=map_t[t[i]])
    //         {
    //             return 0;
    //         //     cout << "not matched";
    //         }
    //         map_s[s[i]]=i+1;
    //         map_t[t[i]]=i+1;
    //     }
    //     // return 1;
    //     for(int i=0;i<length;i++){
    //         cout << "map_s : " << map_s[s[i]];
    //         cout << "map_t : " << map_t[t[i]];
    //         cout<<endl;
            
    //     }
        
    // }

        //map solution 
    //--------------------------------------------------
    string s,t;
    bool mainLogic(string s, string t){
        map<char,char>mp;
        for(int i = 0 ; i <s.size() ; ++i){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = t[i];
            }else if(mp[s[i]] != t[i]){
                return false;
            } 
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        return mainLogic(s,t) && mainLogic(t,s);
    }

    //The above steps work for the given eg. test cases, but for s= badc and t = baba the map results in the following content:'b'-'b' , 'a'-'a' , 'd'-'a', 'c'-'a' and return true as answer.
    //So to avoid test cases having "many to one" key value pair, the function is called by interchanging s and t , for the above case now s= baba and t= badcwhen characterb of string s is processed for the second time map[s[i]] = b but t[i]= d which are not same, hence returns false.




                      //character count based solution
    //

                                    // bool isIsomorphic(string s, string t) {
                                        
                                    //     unordered_map<char,int> mapp1;
                                    //     unordered_map<char,int> mapp2;
                                        
                                    //     for(int i=0; i<s.size(); i++){
                                    //         mapp1[s[i]] =i+1;
                                    //         mapp2[t[i]]=i+1;
                                    //     }
                                        
                                    //     for(int i=0; i<s.size(); i++){
                                    //         if(mapp1[s[i]]!= mapp2[t[i]]) return false;
                                    //     }
                                        
                                    //     return true;
                                    // }

};

int main(){
    string s,t;
    // bool isIsomorphic(string s, string t)
    cin >> s >> t;
    Solution obj;
    obj.s = s;
    obj.t = t;
    int result = obj.isIsomorphic(obj.s,obj.t);

    cout << result;

}