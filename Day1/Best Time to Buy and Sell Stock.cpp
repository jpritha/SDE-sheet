#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int least_so_far = INT_MAX;
        int max_price = INT_MIN;
        
        for(int i=0; i<prices.size(); i++) {
            
            least_so_far = min(least_so_far , prices[i]);
            max_price = max(max_price , prices[i]-least_so_far);
        }
        return max_price;
    }
};

