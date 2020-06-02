#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
        long long int n,b;
        cin>>n;
        int a[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>b;
            if(b%2==0)
            {
               a[i]=1; 
            }
            if(b%2!=0)
            {
                a[i]=0;
            }
            if(b%4==0)
            {
                a[i]=2;
            }
        }
        long long count=0;
        for(long int i=0;i<n;i++)
        {
            long int left=0;
            long int right=0;
            if(a[i]==1)
            {
                count++;
                long int li=i-1,ri=i+1;
                while(li>=0)
                {
                    if(a[li]==0)
                    {
                        left++;
                    }else
                    {
                        break;
                    }
                    li--;
                }
                while(ri<n)
                {
                    if(a[ri]==0)
                    {
                        right++;
                    }else
                    {
                        break;
                    }
                    ri++;
                }
                count=count+left+right+(left*right);
            }
        }
        cout<<(n*(n+1)/2)-count<<"\n";
     }
	return 0;
}
