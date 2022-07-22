#include<bits/stdc++.h>
using namespace std;


// Also covers when the array is all negative   :  OPTIMAL

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0, maxsum = INT_MIN;
        
        for(int i=0; i<nums.size(); i++) {
            
            currsum = max(currsum+nums[i] , nums[i]);
            
            maxsum = max(maxsum , currsum);
        }
        return maxsum;
    }
};


/*                  When the array is not all negative
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0, maxsum = INT_MIN;
        
        for(int i=0; i<nums.size(); i++) {
            
            currsum = max(currsum+nums[i] , 0);
            
            maxsum = max(maxsum , currsum);
        }
        return maxsum;
    }
};                */