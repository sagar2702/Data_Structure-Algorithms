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
    cin>>n;
    int arr[n];
    fo(i,n){
      cin>>arr[i];
    }
    ll count=0;
    fo(i,n){
      x=arr[i];
      fox(j,i+1,n){
         if((arr[i]&arr[j])==x) count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
