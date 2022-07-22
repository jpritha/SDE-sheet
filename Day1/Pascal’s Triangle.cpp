#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>> ans;
        
        for(int i=0; i<num; i++){
            
            vector<int> row(i+1 , 1);
            
            for(int j=1; j<i; j++){
                row[j] = ans[i-1][j-1] + ans[i-1][j];
            }
            ans.push_back(row);
        }
        return ans;
    }
};



/*                                         OR                (Code Studio)
#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> matrix(n);

    for(int i=0; i<n; i++) {
        matrix[i].resize(i+1);
        matrix[i][0] = matrix[i][i] = 1;
        
        for(int j=1; j<matrix[i].size()-1; j++) {
            matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
        }
    }
    return matrix;
}                
*/