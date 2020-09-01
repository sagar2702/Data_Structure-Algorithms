// [1,0,3,0,12]
// [1,3,12,0,0]
// must maintain relative order of non zero elememt


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                int k=i;
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]!=0)
                    {
                        int t=nums[j];
                        nums[j]=nums[k];
                        nums[k]=t;
                        k=j;
                    }
                }
            }
        }
    }
};