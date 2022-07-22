#include<bits/stdc++.h>
using namespace std;

// Leetcode
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) { 
        vector<vector<int>> ans;
        
        if(intervals.size() == 0) return ans;
        
        sort(intervals.begin(), intervals.end());
        
        vector<int> temp = intervals[0];
        
        for(auto& it : intervals){
            if(temp[1] >= it[0]){
                //take the max element of the second of both intervals
                temp[1] = max(temp[1] , it[1]);
            }
            else{
                ans.push_back(temp);
                //our new pair would be intervals[i]
                temp = it;
            }
        }
        //last pair left to be pushed
        ans.push_back(temp);
        
        return ans;
    }
};

/*              CodeStudio 
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    
    if(intervals.size() == 0) return ans;
    
    sort(intervals.begin(), intervals.end());
    
    vector<int> temp(2);
    temp[0] = intervals[0][0];
    temp[1] = intervals[0][1];
    
    for(auto it : intervals) {
        if(temp[1] >= it[0]) {
            temp[1] = max(temp[1] , it[1]);
        }
        else {
            ans.push_back(temp);
            //our new pair would be intervals[i]
            temp = it;
        }
    }
    
    //last pair left to be pushed
    ans.push_back(temp);
    return ans;
}
*/