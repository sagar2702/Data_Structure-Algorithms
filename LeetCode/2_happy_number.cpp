class Solution {
public:
    bool isHappy(int n) {
        int sum;
        set<int> occurred;
        while(1){
            sum=0;
            while(n!=0)
            {
            int x=n%10;
            sum=sum+x*x;
            n=n/10;
            }
            n=sum;
            if(occurred.count(n)==1)
            {
                return false;
            }
            occurred.insert(n);
            if(n==1)
            {
                return true;
            }
        }
        
        // return true;
            
        
        
    }
};