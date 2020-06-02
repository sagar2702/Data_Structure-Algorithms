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
    ll t,n,a,b;
    cin>>t;
    while(t--)
    {
       cin>>n;
       vll v;
       int pos[n],k=0;
       fo(i,n)
       {
           cin>>a;
           v.push_back(a);
           if(v[i]==1)
           {
               pos[k++]=i+1;
           }
       }
       int flag=0;
    //   cout<<k<<" "<<v.size()<<"\n";
       if(k==2)
       {
           if(v.size()<7)
           {
                cout<<"NO\n";
                continue;
           }
      }
      fox(i,1,k)
      {
          if(pos[i]-pos[i-1]<6)
          {
              flag=1;
          }
          if(flag==1)
          {
              cout<<"NO\n";
              break;
          }
      }
      if(flag==0)
      {
          cout<<"YES\n";
      }

    }
   return 0;
}