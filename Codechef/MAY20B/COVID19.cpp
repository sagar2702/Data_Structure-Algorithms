#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,l;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int max=0,min=100;
	    for(int i=0;i<n;i++)
	    {
	        int count=1;
	        k=i;
	        l=i;
	        while(k>0)
	        {
	            if(abs(a[k]-a[k-1])<=2)
	            {
	                count++;
	            }else
	            {
	                break;
	            }
	            k--;
	        }
	        while(l<n-1)
	        {
	            if(abs(a[l]-a[l+1])<=2)
	            {
	                count++;
	            }else{
	                break;
	            }
	            l++;
	        }
	        if(count<min)
	        {
	            min=count;
	        }
	        if(count>max)
	        {
	            max=count;
	        }
	    }
	    cout<<min<<" "<<max<<"\n";
	}
	return 0;
}
