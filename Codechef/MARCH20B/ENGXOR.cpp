
#include<bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n,q,p,sbcounter=0;
	    long int even=0,odd=0;
	    scanf("%ld %ld",&n,&q);
	    long int a[n];
	    for(long int i=0;i<n;i++)
	    {
	        scanf("%ld",&a[i]);
	        sbcounter=__builtin_popcount(a[i]);
	        if(sbcounter%2==0)
	            {
	                even++;
	            }else
	            {
	                odd++;
	            }
	    }
	    for(long int i=0;i<q;i++)
	    {
	       scanf("%ld",&p);
	       long int count=0;
	       count=__builtin_popcount(p);
	       //printf("**%ld\n",count);
	         if(count%2==0)
	            {
	                printf("%ld %ld\n",even,odd);
	               
	            }else
	            {
	                 printf("%ld %ld\n",odd,even);
	            }
	        
	    }
	}
	return 0;
}

