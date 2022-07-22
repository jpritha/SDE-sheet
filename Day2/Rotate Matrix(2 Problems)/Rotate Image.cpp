//  LEETCODE : https://leetcode.com/problems/rotate-image/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        //Transpose the matrix
        for(int i=0; i<matrix.size(); i++) {
            for(int j=0; j<i; j++) {
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        
        //Reverse each row in matrix
        for(int i=0; i<matrix.size(); i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};