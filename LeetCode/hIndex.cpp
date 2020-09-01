class Solution {
public:
    int hIndex(vector<int>& citations) {
        //----O(n)----
        //  int pos=0;
        // for(int i=n-1;i>=0;i--)
        // {
        //   pos++;
        //     if(citations[i]<pos)
        //         return pos-1;
        // }
        // return pos;
        //-----O(log(n))----
        int n=citations.size();
        int l=0,h=n;
        while(l<h)
        {
            int mid=(l+h)/2;
            if(citations[mid]<n-mid) l=mid+1;
            else
                h=mid;
        }
        return n-l;
    }
};