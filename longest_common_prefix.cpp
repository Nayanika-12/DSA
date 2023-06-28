// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,j,y=1,min_length,N;
        int min=INT_MAX;
        string k="";
        N=strs.size();
        for(i=0;i<N;i++)
        {
            int l=strs[i].length();
            if(l<min)
            min_length=l;
        }
        for(i=0;i<min_length;i++)
        {
            for(j=0;j<(N-1);j++)
            {
                if(strs[j][i]!=strs[j+1][i])
                {
                    y=0;
                    break;
                }
            }
            if(y==0)
            break;
            else
            {
                k=k+strs[0][i];
                
            }
            
        }
        
        return k;
    }
};