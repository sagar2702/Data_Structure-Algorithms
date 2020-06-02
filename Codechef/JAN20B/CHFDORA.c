#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	     int n,m;
	    scanf("%d %d",&n,&m);
	    long int A[n][m];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            scanf("%ld",&A[i][j]);
	        }
	    }
	    
	    long int count=0,a,b,c,d;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	           a=i;
	           c=i;
	           b=j;
	           d=j;
	            while(A[a][j]==A[c][j] && A[i][b]==A[i][d])
	            {
	                count++;
	                a=a-1;
	                b=b-1;
	                c=c+1;
	                d=d+1;
	                if(a==-1 || c==n || b==-1 ||d==m)
	                {
	                    break;
	                }
	            }
	        }
	    }
	    printf("%ld\n",count);
	}
	
	return 0;
}

