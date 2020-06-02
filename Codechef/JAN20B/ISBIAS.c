#include <stdio.h>

int main(void) {
	// your code goes here
    int n,q;
    scanf("%d %d",&n,&q);
    int a[n];
    char b[n-1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
             b[i]='<';
        }else{
             b[i]='>';
        }
    }
    while(q--)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        if(b[l-1]!=b[r-2])
        {
            printf("YES\n");
        }else
        {
            printf("NO\n");
        }
        
    }
	return 0;
}

