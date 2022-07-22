#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, j;

//Our next permutation would be starting from the last element
        
        for(k=n-2; k>=0; k--){                     //thus loop starts from second last
            if(nums[k] < nums[k+1]){
                break;
            }
        }
        
//If we do not find any breakpoint , i.e our next permutation will be the very first number
        if(k < 0){
            reverse(nums.begin(), nums.end());          //[3,2,1] is [1,2,3]
        }
        
/*If we find a break point , find a number just bigger than k th element 
(from the back as in dictionary order it is increasing from the back till the breakpoint)*/
        
        else{
        // We have to swap k with an element just bigger than nums[k]
            for(j=n-1; j>=0; j--){
                if(nums[j] > nums[k]){                       //[1,3,2]  to [2,1,3]           
                    break;                          
                }
            }
            swap(nums[k], nums[j]);
            
            reverse(nums.begin()+k+1 , nums.end());
        }
    }
};