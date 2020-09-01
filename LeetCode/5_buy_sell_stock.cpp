class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int start=0,end=-1;
        int n=prices.size();
        for(int i=0;i<n-1;i++)
        {
           if(prices[i+1]<prices[i])
           {
               continue;
           }
           start=i;
           while(i<n-1)
           {
               if(prices[i+1]>prices[i])
                {
                    i++;
                    if(i==n-1)
                    {
                        end=i++;
                        profit+=prices[end]-prices[start];
                    }
                }else
                {
                   end=i;
                   profit+=prices[end]-prices[start];
                   break;
                }
           }
        }
         

           
        return profit;
    }
};