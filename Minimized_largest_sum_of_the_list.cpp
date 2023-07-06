// Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

// Return the minimized largest sum of the split.

// A subarray is a contiguous part of the array.

 

// Example 1:

// Input: nums = [7,2,5,10,8], k = 2
// Output: 18
// Explanation: There are four ways to split nums into two subarrays.
// The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.
// Example 2:

// Input: nums = [1,2,3,4,5], k = 2
// Output: 9
// Explanation: There are four ways to split nums into two subarrays.
// The best way is to split it into [1,2,3] and [4,5], where the largest sum among the two subarrays is only 9.

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

        int l=0,r=0,result,mid;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            l = max(l,nums[i]);
            r += nums[i];
        }

        while(l <=r )
        {
            mid = (l+r)/2;
            if(search(nums,k,mid))
            {
                result = mid;
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }

     return result;

    }

    bool search(vector<int>& nums, int k, int mid)
    {
        int sum=0,subarray=1,ans;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
           sum += nums[i];
           if(sum > mid)
           {
               sum = nums[i];
               subarray++;
           }
        }

        if(subarray <= k)
        {
         ans = mid;
         return true;
        }
        else
        return false;

    }

};
