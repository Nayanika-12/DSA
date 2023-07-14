// Given an m x n matrix, return all elements of the matrix in spiral order.

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        int k = 0, l = 0,i;
        vector<int> v;

        while(k < m && l < n)
        {
            //First row
            for(i=l;i<n;i++)
            {
                v.push_back(matrix[k][i]);
                
            }
            k++;

            //last column
            for(i=k;i<m;i++)
            {
                v.push_back(matrix[i][n-1]);
               
            }
            n--;

            //last row

            if(k<m){
            for(i = n-1; i >= l;i--)
            {
                v.push_back(matrix[m-1][i]);
                
            }
            m--;
            }

            //first column
            
            if(l<n){
            for(i = m-1; i>= k;i--)
            {
                v.push_back(matrix[i][l]);
                
            }
            l++;
            }
        }

        return v;
    }
};