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
    string S,pattern;
    cin>>S;
    cin>>pattern;
    sort(all(S));
    char ch=pattern[0];
    bool check=true;
    for(auto x:pattern){
       if(x!=ch && check){
        ch=x;
        check=false;
       }
       auto itr=lower_bound(all(S),x);
       S.erase(itr);
    }
    auto itr1=lower_bound(all(S),pattern[0]);
    if(*itr1>ch){
      S.insert(itr1,all(pattern));
    }else{
      auto itr2=upper_bound(all(S),pattern[0]);
      S.insert(itr2,all(pattern));
    }
    cout<<S<<endl;
  }

  return 0;
}
