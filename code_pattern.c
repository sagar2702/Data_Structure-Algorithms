/* print pattern
if n=3
10203010011012
**4050809
****607
n=4
1020304017018019020
**50607014015016
****809012013
******10011*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n,i,j,k,a;
  int x=1;
  int y,z;
  scanf("%d",&n);
  y=(n*n)+1;
  a=y;
  z=n-1;
  for(i=1;i<=n;i++)
  {
      for(j=1;j<=n;j++)
      {
          if(i>j)
          {
              printf("**");
          }else{
         printf("%d0",x);
         x++;
          }
      }
      for(k=i;k<=n;k++)
      {
          if(k==n)
          {
          printf("%d",y);
          }
          else
          {
          printf("%d0",y);
          }
          y++;
      }
      a=a-z;
      y=a;
      z--;
      printf("\n");

  }
  return 0;
}
