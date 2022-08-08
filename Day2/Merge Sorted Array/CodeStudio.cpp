// https://www.codingninjas.com/codestudio/problems/1214628?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int i = m-1, j = n-1;
    vector<int> res(m+n, 0);
    int len = m+n;
    
    while(i>=0 or j>=0) {
        if(arr1[i] >= arr2[j]) {
            res[len-1] = arr1[i];
            i--;
        }
        else {
            res[len-1] = arr2[j];
            j--;
        }
        len--;
    }
    
    return res;
}