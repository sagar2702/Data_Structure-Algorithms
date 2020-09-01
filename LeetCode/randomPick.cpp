class Solution {
public:
    vector<int> arr;
    int n;
    Solution(vector<int>& w) {
        for(int i=1;i<w.size();i++)
        {
            w[i]=w[i-1]+w[i];
        } 
       arr=w;
    }
    
    int pickIndex() {
        return upper_bound(arr.begin(),arr.end(),rand()%arr.back())-arr.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */