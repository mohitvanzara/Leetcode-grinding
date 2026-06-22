#include<bits/stdc++.h>
class Solution {
public:
    bool isAnagram(string s, string t) {
        // int n1 = s.size();
        // int n2 = t.size();
        // if(n1!=n2) return false;

        // map<char,int> mpp1;
        // map <char ,int> mpp2;
        // for (char ch:s){
        //     mpp1[ch]++;
        // }
        // for(char ch:t){
        //     mpp2[ch]++;
        // }

        // if(mpp1 != mpp2) return false;
        // return true;

        //second approach
        if(s.size()!=t.size()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i =0 ;i<s.size();i++){
            if(s[i]!=t[i]) return false;
        }
        return true;
        
    }
};