class Solution {
public:
    string getPermutation(int n, int k) {
        string str="";
        for(int i=0;i<n;i++)
        {
            str=str+to_string(i+1);
        }
        int j=1;
        do{
            if(j==k)
            {
                break;
            }
            j++;
        }while(next_permutation(str.begin(),str.end()));
        return str;
    }
};