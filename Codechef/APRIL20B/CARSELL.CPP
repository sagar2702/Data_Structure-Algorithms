#include<bits/stdc++.h>
#define ll long long
#define fo(i,n) for(ll int i=0;i<n;++i)
#define fr(i,n) for(ll int i=n-1;i>=0;--i)
#define fx(i,a,n) for(ll int i=a;i<n?i<n:i>=0;i<n?i++:i--)
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
       vll p;
       fo(i,n)
       {
           cin>>a;
           p.push_back(a);
       }
       sort(all(p));
       ll count=0,k=0; 
       
       fr(i,n)
       {
          if(!(p[i]-k<0))
          {
              count=count+p[i]-k;
              count=count%N;
          }
          k++;
       }
    cout<<count<<"\n";
    }
   return 0;
}