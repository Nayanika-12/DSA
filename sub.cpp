// Given a list arr of N integers, print sums of all subsets in it.

// Example 1:

// Input:
// N = 2
// arr[] = {2, 3}
// Output:
// 0 2 3 5
// Explanation:
// When no elements is taken then Sum = 0.
// When only 2 is taken then Sum = 2.
// When only 3 is taken then Sum = 3.
// When element 2 and 3 are taken then 
// Sum = 2+3 = 5.




class Solution{

    public:
    vector<int> subsetSums(vector<int> arr, int N, int l=0, int sum = 0)
    {
        // Write Your Code here
        // Print current subset
       
        vector<int> v={};
        vector<int> x={};
    if (l > N-1) {
       v.push_back(sum);
      return v;
    }
 
    // Subset including arr[l]
    x = subsetSums(arr, l + 1, N-1, sum + arr[l]);
    v.push_back(x);
 
    // Subset excluding arr[l]
    subsetSums(arr, l + 1, N-1, sum);
    
  
}

};

//Driver code i.e, int main() function