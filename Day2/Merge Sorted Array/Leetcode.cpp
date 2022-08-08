// https://leetcode.com/problems/merge-sorted-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int i = m-1, j = n-1;
        int k = m + n - 1;
        
        while(i >= 0 && j >= 0) {
            if(A[i] < B[j]) {
                A[k--] = B[j--];
            }
            else {
                A[k--] = A[i--];
            }
        }
        
        while(j >= 0) {                    //if B[] has more elements than A[]
            A[k--] = B[j--];
        }
    }
};




