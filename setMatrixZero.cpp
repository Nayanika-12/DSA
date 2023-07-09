// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.

#include<bits/stdc++.h>
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();   //rows
        int m = matrix[0].size();   //columns
        bool flag1= false, flag2=false;

        int i,j;
        for(i=0;i<n;i++)
        {
          if(matrix[i][0] == 0)
          flag1 = true;
        }

        for(j=0;j<m;j++)
        {
          if(matrix[0][j] == 0)
          flag2 = true;
        }
        for(int i=1; i<n;i++)
        {
          for(int j=1;j<m;j++)
          {
            if(matrix[i][j] == 0)
            {
              matrix[i][0] = 0;
              matrix[0][j] = 0;
            }
          }
        }

        for(i=1;i<n;i++)
        {
          if(matrix[i][0] == 0)
          {
            for(j=1;j<m;j++)
            {
              matrix[i][j] = 0;
            }
          }
          // else
          // continue;
        }

        for(j=1;j<m;j++)
        {
          if(matrix[0][j] == 0)
          {
            for(i=1;i<n;i++)
            {
              matrix[i][j] = 0;
            }
          }
          // else 
          // continue;
        }

        if(flag1 == true)
        {
          for(i=0;i<n;i++)
          {
            matrix[i][0] = 0;
          }          
        }

        if(flag2 == true)
        {
          for(j=0;j<m;j++)
          {
            matrix[0][j] = 0;
          }
        }


    }
};