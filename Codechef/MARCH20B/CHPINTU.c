#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d%d",&n,&m);
	    int a[n],p[n];
	    int b[m];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&p[i]);
	    }
	    for(int i=0;i<m;i++)
	    {
	        b[i]=-1;
	    }
	    for(int i=0;i<n;i++)
	    {
	        int x=a[i]-1;
	        if(b[x]==-1)
	        {
	            b[x]=b[x]+p[i]+1;
	        }else
	        {
	            b[x]=b[x]+p[i];
	        }
	    }
	    int min=99999;
	    for(int i=0;i<m;i++)
	    {
	        if(min>b[i]&&b[i]!=-1)
	        {
	            min=b[i];
	        }
	    }
	    printf("%d\n",min);
	    
	}
	return 0;
}

