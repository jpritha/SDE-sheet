#include<bits/stdc++.h>
using namespace std;

//Since it is overall sorted, we will consider this 2D array as 1D array
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0) return false;
        
        int m = matrix.size(), n = matrix[0].size();
        
        int l = 0;
        int r = (m * n) - 1 ;     //Taking this as 1D array and hence size = (m*n)
        
        while(l <= r){
            int mid = l + (r - l)/2;
            
            if(matrix[mid / n][mid % n] == target){
                return true;
            }
            else if(matrix[mid / n][mid % n] < target){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            } 
        }
        return false;
    }
};

/*m = number of rows ,  n = number of columns

matrix[mid/n][mid%n] = matrix[row][col]
                        row = mid / n        =>mid / number of columns
                        col = mid % n        =>mid % number of columns
*/