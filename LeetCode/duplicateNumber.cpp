class Solution {
public:
    int findDuplicate(vector<int>& nums) {
   // ----Solution 1----
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(nums[i-1]==nums[i])
        //     {
        //         return nums[i];
        //     }
        // }
        
   //----Solution 2------
        // set<int> toCheck;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(toCheck.count(nums[i])==1)
        //     {
        //         return nums[i];
        //     }
        //     toCheck.insert(nums[i]);
        // }
        
  // ----Solution 3 ----
        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])]>0)
            {
                nums[abs(nums[i])]=-nums[abs(nums[i])];
            }else
            {
                return abs(nums[i]);
            }
        }
        return -1;
    }
};