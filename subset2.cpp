

// The solution set must not contain duplicate subsets. Return the solution in any order.
// Example 1:

// Input: nums = [1,2,2]
// Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
// Example 2:

// Input: nums = [0]
// Output: [[],[0]]







class Solution {
public:
   
void subsetSums(vector<int>&arr, int idx, set<vector<int>> &final, vector<int> &sum)
{ 
  
      
        final.insert(sum);
    
    for (int j=idx; j<arr.size();j++)
    {
    //    if(j != idx && arr[j] == arr[j-1]) continue;
        sum.push_back(arr[j]);
        subsetSums(arr, j+1, final,sum);
        //Backtracking
        sum.pop_back();
    }
}
 vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
       sort(nums.begin(), nums.end());
        set<vector<int>> v;
        vector<int> y;
         subsetSums(nums,0,v,y);
         vector<vector<int> > res;
	for (auto i : v)
		res.push_back(i);

	return res;
    }

};