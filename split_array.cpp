//Algorithm to split array into two equal subarrays
//where elements are not given in any specific order.

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    // int a[4]={1,2,3,4};
    // int a1[3],a2[3];
    // sort(a,a+4);
    int n;
    cout<<"enter number of element in array:"<<"\n";
    cin>>n;
    int a[n],a1[n-1],a2[n-1];
    int sum=0;
    cout<<"enter array elements:"<<"\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a,a+n);
    if(sum%2==0)
    {
        int k=0,x=sum/2,l=0;
      for(int i=n-1;i>=0;i--)
      {
          if(x-a[i]>=0)
          {
              a1[k++]=a[i];
              x=x-a[i];
          }else
          {
              a2[l++]=a[i];
          }
      }
      //array 1
      cout<<"array1: ";
      for(int i=0;i<k;i++)
      {
          cout<<a1[i]<<" ";
      }
      cout<<"\n";
      //array2
      cout<<"array2: ";
      for(int i=0;i<l;i++)
      {
          cout<<a2[i]<<" ";
      }
    }else
    {
        cout<<"cannot split into two equal arrays."<<"\n";
    }
    
    return 0;
}
