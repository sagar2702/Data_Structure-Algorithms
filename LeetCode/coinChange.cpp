class Solution {
public:
    int change(int amount, vector<int>& coins) {
        if(amount<0) return 0;
        if(amount==0) return 1;
        if(coins.empty()) return 0;
        int count[coins.size()+1][amount+1];
        for(int i=0;i<=coins.size();i++)
        {
            count[i][0]=1;
        }
        for(int i=1;i<=amount;i++)
        {
            count[0][i]=0;
        }
        for(int i=1;i<=coins.size();i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                {
                    count[i][j]=count[i-1][j]+count[i][j-coins[i-1]];
                }else
                {
                    count[i][j]=count[i-1][j];
                }
            }
        }
        return count[coins.size()][amount];
    }
};