// // Given two arrays of equal size N and an integer K. The task is to check if after permuting both arrays, we get sum of 
// their corresponding element greater than or equal to k i.e Ai + Bi >= K for all i (from 0 to N-1). Return true if possible, else false.



class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        // Your code goes here
        
        int i;
        
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        
        for(i=0; i<n; i++)
        {
            if(a[i] + b[i] < k)
            return false;
        }
        
        return true;
        
    }
};


