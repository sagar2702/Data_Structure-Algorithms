class Solution {
    //catalan's number 1,1,2,14,42...
    // C0=1 and Cn= [i=0 to n-1, sum(Ci*Cn-1-i) ]
public:
    int numTrees(int n) {
        if(n<=1) return 1;
        int count[n+1];
        count[0]=1;
        count[1]=1;
        for(int i=2;i<=n;i++)
        {
            count[i]=0;
            for(int j=0;j<i;j++)
            {
                count[i]+=count[j]*count[i-j-1];
            }
            
        }
        return count[n];
    }
};