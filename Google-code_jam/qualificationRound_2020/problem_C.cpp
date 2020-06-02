#include<bits/stdc++.h>
#define ll long long
#define fo(i,n) for(ll int i=0;i<n;++i)
#define fr(i,n) for(ll int i=n-1;i>=0;--i)
#define fox(i,a,n) for(ll int i=a;i<n;i++)
#define vl vector<long>
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(),x.end()
#define count(x)  __builtin_popcountll(x)
#define N 1000000007


using namespace std;

int main()
{
    ll t,n,k=1;
    cin>>t;
    while(t--)
    {
       cin>>n;
       int a[n],b[n],c[n];
       ll x,y;
       fo(i,n)
       {
           cin>>a[i]>>b[i];
           c[i]=i;
       }
       fo(i,n-1)
       {
           fo(j,n-i-1)
           {
               if(a[j]>a[j+1])
               {
                   int t=a[j];
                   a[j]=a[j+1];
                   a[j+1]=t;
                   
                   
                   t=b[j];
                   b[j]=b[j+1];
                   b[j+1]=t;
                   
                   t=c[j];
                   c[j]=c[j+1];
                   c[j+1]=t;
               }
           }
       }
       char str[n];
       str[c[0]]='C';
       x=b[0];
       y=-1;
       int flag=0;
     fox(i,1,n)
     {
         if(a[i]>=x)
         {
             str[c[i]]='C';
             x=b[i];
             
         }
         else if(a[i]>=y)
         {
             str[c[i]]='J';
             y=b[i];
             
         }else
         {
             cout<<"Case #"<<k<<": "<<"IMPOSSIBLE\n";
             flag=1;
             break;
         }
     }
     if(flag==0)
     {
         cout<<"Case #"<<k<<": ";
         fo(i,n)
         {
             cout<<str[i];
         }
         cout<<"\n";
     }
     k++;
    }
   return 0;
}