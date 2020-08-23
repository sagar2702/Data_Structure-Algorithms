#include<bits/stdc++.h>
#define ll long long
#define fo(i,n) for(ll int i=0;i<n;++i)
#define fr(i,n) for(ll int i=n-1;i>=0;--i)
#define foa(i,a,n) for(ll int i=a;i<n;++i)
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
    ll t,n,x,a,b,c,k,l,m;
    cin>>t;
    while(t--)
    {
      cin>>n;
      int flag=0;
      vll arr1(n);
      vll arr2(n);
      vll temp;
      ll mina,minb,mi;
      map<ll, ll> mp,mpa,mpb;
      fo(i,n)
      {
        cin>>arr1[i];
        mp[arr1[i]]++;
        mpa[arr1[i]]++;
      }
      
      fo(i,n)
      {
        cin>>arr2[i];
        mp[arr2[i]]++;
        mpb[arr2[i]]++;
      }
      ll minCount=0;
      for(auto i : mp) 
      { 
        if(i.second % 2 != 0) 
        { 
            flag=1;
            break;
        }
      } 
      if(flag==1){
        cout<<"-1\n";
        continue;
      }
      for(auto i:mpa)
      {
        a=i.second;
        b=mp[i.first]/2;
        if(a>b)
        {
           x=a-b;
           while(x--){
             temp.push_back(i.first);
           }
        }
      }
      for(auto i:mpb)
      {
        a=i.second;
        b=mp[i.first]/2;
        if(a>b)
        {
           x=a-b;
           while(x--){
             temp.push_back(i.first);
           }
        }
      }
      sort(all(temp));
      mina=*min_element(all(arr1));
      minb=*min_element(all(arr2));
      mi=min(mina,minb);
      mi=mi*2;
      fo(i, temp.size()/2){
        minCount+=min(temp[i],mi);
      }
      
      
      cout<<minCount<<"\n";
    }       

   return 0;
}


