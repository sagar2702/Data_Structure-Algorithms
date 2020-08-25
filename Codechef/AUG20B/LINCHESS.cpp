#include<bits/stdc++.h>
#define ll long long
#define fo(i,n) for(ll int i=0;i<n;++i)
#define fr(i,n) for(ll int i=n-1;i>=0;--i)
#define fox(i,a,n) for(ll int i=a;i<n;i++)
#define frx(i,a,n) for(ll int i=n-1;i>=a;--i)
#define vl vector<long>
#define vll vector<ll>
#define vi vector<int>
#define vc vector<char>
#define all(x) x.begin(),x.end()
#define count(x) __builtin_popcountll(x)
#define N 1000000007
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ll t,n,x,y,a,b,c,k,l,m;
  cin>>t;
  while(t--)
  {
   cin>>n>>m;
   ll minMove=INT_MAX ;
   int flag=0,index;
   vector<ll> p(n);
   fo(i,n){
    cin>>p[i];
    if(p[i]>m) continue;
    if(m%p[i]==0){
      flag=1;
      a=m/p[i];
      if(minMove>a){
        minMove=a;
        index=i;
      }
    }
   }
   if(flag==0){
    cout<<"-1\n";
    continue;
   }
  cout<<p[index]<<"\n";
  }

  return 0;
}


  

