class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<nums.size();i=i+2)
        {
            if(i!=n-1)
            {
                if(nums[i]!=nums[i+1])
                 {
                      return nums[i];
                 }
            }
        }
        return nums[n-1];    }  
    
};