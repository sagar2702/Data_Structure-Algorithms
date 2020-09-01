//reverse string,  in-place with O(1) extra memory.

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            char x= s[n-1-i];
            s[n-1-i]=s[i];
            s[i]=x;
        }
        //or just use this => reverse(s.begin(),s.end());
    }
};