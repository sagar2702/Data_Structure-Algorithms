class Solution {
public:
    //greedy approach applied here
    static bool cmp(const vector<int> &a,const vector<int> &b)
    {
        return abs(a[0]-a[1])>abs(b[0]-b[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sum=0;
        int n=costs.size();
        //decreasing order sort
        sort(costs.begin(),costs.end(),cmp);
        int a=0,b=0;
        for(int i=0;i<n;i++)
        {
            if(b==n/2||(costs[i][0]<costs[i][1]&&a!=n/2))
            {
                sum+=costs[i][0];
                a++;
            }else
            {
                sum+=costs[i][1];
                b++;
            }
        }
        return sum;
    }
};