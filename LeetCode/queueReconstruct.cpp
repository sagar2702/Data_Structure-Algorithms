class Solution {
public:
    //compare function to sort height of people
    //in descending order with k in increasing order of 
    // same height people
    static bool cmp(vector<int> &a,vector<int>&b)
    {
        if(a[0]==b[0])
        {
            return a[1]<b[1];
        }else
        {
            return a[0]>b[0];
        }
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        if(people.empty())
        {
            return people;
        }
        //sorting  people
        sort(people.begin(),people.end(),cmp);
        vector<vector<int>> recon_people;
        recon_people.push_back(people[0]);
        for(int i=1;i<people.size();i++)
        {
            //inserting people such that exact k people in front 
            //has height greater or equal;
            recon_people.insert(recon_people.begin()+people[i][1],people[i]);       
        }
        return recon_people;
    }
};