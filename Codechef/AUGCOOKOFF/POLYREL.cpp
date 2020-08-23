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
#define setBitCount(x) __builtin_popcountll(x)
#define N 1000000007
using namespace std;


// use \n instead of endl for fast IO
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  ll t,n,x,y,a,b,c,k,l,m,q;
  cin>>t;
  while(t--)
  {
    cin>>n;
    ll arr[n][2];
    fo(i,n){
      cin>>arr[i][0]>>arr[i][1];
    }
    ll sum=0;
    while(n>=3){
       sum=sum+n;
       n=n/2;
       
    }
    cout<<sum<<"\n";
  }
  return 0;
}