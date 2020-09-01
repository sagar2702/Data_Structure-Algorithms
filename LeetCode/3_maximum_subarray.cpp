class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=nums[0];
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        for(int i=0;i<n;i++)
        {
            int sum=nums[i];
            if(max<sum)
                {
                    max=sum;
                }
            for(int j=i+1;j<n;j++)
            {
                sum=sum+nums[j];
                if(sum<0)
                {
                    break;
                }
                if(max<sum)
                {
                    max=sum;
                }
            }
            
        }
        return max;
    }
};