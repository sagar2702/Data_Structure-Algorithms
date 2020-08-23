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
    cin>>n>>k;
    string bin;
    cin>>bin;
    ll even=0,odd=0,flag=0;
    for(char x:bin){
      if(x=='1') even++;
      if(x=='0') odd++;
    }
    l=n/k;
    if(odd%l!=0 && even%l!=0){
      cout<<"IMPOSSIBLE\n";
      continue;
    }
    x=even/l;
    y=odd/l;
    string bin1="",bin2;
    while(y--){
        bin1=bin1+'0';
    }
    while(x--){
      bin1+='1';
    }
    bin2=bin1;
    reverse(bin2.begin(),bin2.end());
    fo(i,l){
      if(flag==0){
        cout<<bin1;
        flag=1;
      }else{
        cout<<bin2;
        flag=0;
      }
    }
    cout<<"\n";
  }
  return 0;
}