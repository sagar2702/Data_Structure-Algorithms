//time complexity O(n^2) 

class Solution {
public:
    static bool cmp(int &a,int &b){
        return a>b;
    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<int> ldivsubset;
        vector<int> tlar;
        sort(nums.begin(),nums.end(),cmp);//sorted in descending order
        int j;
        //finding one of the local largest divisibe subset which may or may not be actual largest
        //because in below for loop, for example i=1 then subset we will get from the range [1,n-1]
        //here we didin't considered i=0  which can be the part of largest one, similarly for other i's..
        for(int i=0;i<nums.size();i++)
        {
            tlar.push_back(nums[i]);
            int k=i;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[k]%nums[j]==0)
                {
                     tlar.push_back(nums[j]);
                     k=j;
                }
            }
            if(tlar.size()>=ldivsubset.size())
            {
                ldivsubset=tlar;
            }
           tlar.clear();
        }
        sort(ldivsubset.begin(),ldivsubset.end());
        int n=ldivsubset.size();

        //here checking left values which can be the part of largest divisible subset
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%ldivsubset[n-1]==0 && nums[i]!=ldivsubset[n-1])
            {
                ldivsubset.push_back(nums[i]);
            }
        }
        return ldivsubset;
    }
};