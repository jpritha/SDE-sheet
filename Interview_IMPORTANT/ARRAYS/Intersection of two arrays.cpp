// Link : https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1?page=1&company[]=PayPal&sortBy=submissions

//                              Intersection of two arrays
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        int cnt = 0;
        
        unordered_set<int> s(a, a+n);          //Adding all array a[] elements in set
        
        for(int i=0; i<m; i++) {
            if(s.find(b[i]) != s.end()) {      //element found in set
                cnt++;
                s.erase(b[i]);
            }
        }
        return cnt;
    }
};