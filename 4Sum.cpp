// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

 

// Example 1:

// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
     int i,j,n,k,l;

     n = nums.size();
     
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
     for(i=0; i<n; i++){
     if(i>0 && nums[i] == nums[i-1])continue;
     
     for(j=i+1; j<n; j++){
     if(j>i+1 && nums[j] == nums[j-1])continue;
     
         
         k = j+1;
         l = n-1;
        
         while(k < l)
         {
             long long sum = nums[i];
             sum += nums[j];
             sum  += nums[k];
             sum += nums[l];
                if(sum == target)
                {
                    vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;

                    while(k<l && nums[k] == nums[k-1])
                    k++;
                    while(k<l && nums[l] == nums[l+1])
                    l--;
                }
                else if(sum < target)
                {
                    k++;
                     while(k>j+1 && nums[k] == nums[k-1] && k<l)
                    k++;
                }
                else{
                    l--;
                    while(l<n-1 && nums[l] == nums[l+1] && k<l)
                    l--;
                }

          }
  



     }
    

     }

    return ans;




    }


};