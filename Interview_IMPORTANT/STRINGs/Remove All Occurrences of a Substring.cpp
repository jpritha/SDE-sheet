// Link : https://leetcode.com/problems/remove-all-occurrences-of-a-substring/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res = s;
        int m = part.length();
        int i, j;
        
        for(i=0, j=0; i<s.length(); i++) {
            res[j++] = s[i];
            
            if(j>=m && res.substr(j-m, m) == part) {
                j -= m;
            }
        }
        return res.substr(0, j);
    }
};



/*                              DRY RUN TO UNDERSTAND BETTER
1> We make a copy of our string s (x in code) and then iterate over the string s.
2> Now in the current iteration if j is greater than or equal to m that means that we   have seen at least m elements, so we can check whether the substring of last m         characters is equal to part or not. If it is equal, we reduce the variable 'j' by m   showing that we have removed this substring and now we will overwrite the characters   from index j.
3>Finally we will return the substring of x of length j.
*/