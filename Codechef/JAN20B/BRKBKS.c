#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int s,a,b,c;
	    scanf("%d %d %d %d",&s,&a,&b,&c);
	    int x=a+b+c;
	    if(x==3)
	    {
	        if(s==1)
	        {
	            printf("3\n");
	        }
	        if(s==2)
	        {
	            printf("2\n");
	        }
	        if(s>=3)
	        {
	            printf("1\n");
	        }
	    }
	    
	    
	     if(x==4)
	    {
	        if(b!=2)
	        {
	             if(s==3||s==2)
    	        {
    	            printf("2\n");
    	        }
	        if(s>=4)
	            {
	            printf("1\n");
	            }
	        }
	       else
    	        {
    	        if(s==2)
        	         {
        	            printf("3\n");
        	        }
    	         if(s==3)
        	        {
        	            printf("2\n");
        	        }
    	        if(s>=4)
        	        {
        	            printf("1\n");
        	        }
    	    }
	    }
	    
	    
	    if(x==5)
	    {
	        if(s==2)
	        {
	            printf("3\n");
	        }
	        if(s==3||s==4)
	        {
	            printf("2\n");
	        }
	        if(s>=5)
	        {
	            printf("1\n");
	        }
	    }
	     if(x==6)
	    {
	        if(s==2||s==3)
	        {
	            printf("3\n");
	        }
	        if(s==5||s==4)
	        {
	            printf("2\n");
	        }
	        if(s>=6)
	        {
	            printf("1\n");
	        }
	    }
	}
	return 0;
}

