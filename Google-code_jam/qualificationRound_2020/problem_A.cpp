#include<bits/stdc++.h>
#define ll long long
#define fo(i,n) for(ll int i=0;i<n;++i)
#define fr(i,n) for(ll int i=n-1;i>=0;--i)
#define fox(i,a,n) for(ll int i=a;i<n;i++)
#define vl vector<long>
#define vll vector<ll>
#define vi vector<int>
#define all(x) x.begin(),x.end()
// #define count(x)  __builtin_popcountll(x)
#define N 1000000007


using namespace std;

int main()
{
    ll t,n,b=1;
    cin>>t;
    while(t--)
    {
     cin>>n;
     ll a[n][n];
     ll sum=n*(n+1)/2;
     ll rsum,csum,rc=0,cc=0,trace=0;
     fo(i,n)
     {
        fo(j,n)
        {
          cin>>a[i][j];
          if(i==j)
          {
            trace+=a[i][j];
           }
        }
     }
      fo(i,n)
      {
          unordered_set<int> check,check1;
          check.insert(a[i][0]);
          check1.insert(a[0][i]);
          fox(j,1,n)
          {
              if(check.count(a[i][j])==1)
              {
                  rc++;
                  break;
              }
              check.insert(a[i][j]);
          }
          fox(j,1,n)
          {
              if(check1.count(a[j][i])==1)
              {
                  cc++;
                  break;
              }
              check1.insert(a[j][i]);
          }
          check.clear();
          check1.clear();
      }
      
     cout<<"Case #"<<b<<": "<<trace<<" "<<rc<<" "<<cc<<"\n";
     b++;
    }
   return 0;
}