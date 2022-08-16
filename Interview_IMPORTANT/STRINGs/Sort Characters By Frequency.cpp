        // VERY  VERY IMPORTANT

// Link : https://leetcode.com/problems/sort-characters-by-frequency/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> mp;
        for(int i=0; i<s.length(); i++) {
            mp[s[i]]++;
        }
        
        map<int, string> dupStr;
        for(auto it : mp) {
            int n = it.second;
            char ch = it.first;
            
            dupStr[n] += string(n, ch);
        }
        
        string res;
              
        for(auto it=dupStr.rbegin(); it!=dupStr.rend(); it++) {     //in reverse
            res += it->second;
        }
              
        return res;
    }
};



/*----------------------------------------------------------------------------------
                 2 nd Method ( SORTING ) : Takes a lot more time than previous one
class Solution {
public:
    string frequencySort(string s) {
        int counts[256] = {0};
        for (char ch : s) {
            ++counts[ch];
        }
        
        sort(s.begin(), s.end(), [&](char a, char b) { 
            return counts[a] > counts[b] || (counts[a] == counts[b] && a < b); 
        });
        return s;
    }
};
----------------------------------------------------------------------------------*/