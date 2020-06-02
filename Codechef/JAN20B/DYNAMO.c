#include <stdio.h>
#include<stdlib.h>
#include<math.h>


long long int s,a,b,c,d,e;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d",&n);
        scanf("%lld",&a);
        s=pow(10,n);
        s=s*2+a;
        printf("%lld\n",s);
        fflush(stdout);
        scanf("%lld",&b);
        c=pow(10,n);
        c=c-b;
        printf("%lld\n",c);
        fflush(stdout);
        scanf("%lld",&d);
        e=pow(10,n);
        e=e-d;
        printf("%lld\n",e);
        fflush(stdout);
        scanf("%d",&x);
            
        
    }
    
    return 0;
}

