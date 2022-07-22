//  CODESTUDIO : https://www.codingninjas.com/codestudio/problems/rotate-matrix_981260?topList=striver-sde-sheet-problems

//  VERY IMPORTANT

#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int left = 0, right = m-1;
    int top = 0, down = n-1;
    
    while(left < right && top < down) {
        for(int i=top; i<down; i++) {
            swap(mat[i][left] , mat[i+1][left]);
        }
        for(int i=left; i<right; i++) {
            swap(mat[down][i] , mat[down][i+1]);
        }
        for(int i=down; i>top; i--) {
            swap(mat[i][right] , mat[i-1][right]);
        }
        for(int i=right; i>left+1; i--) {
            swap(mat[top][i] , mat[top][i-1]);
        }
        
        left++;right--;top++;down--;
    }
}
