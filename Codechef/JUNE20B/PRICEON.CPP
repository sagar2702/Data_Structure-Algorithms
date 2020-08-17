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
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t,n;
    cin>>t;
    while(t--)
     {
     	int k;
        cin>>n>>k;
        vi p;
        ll esum=0,asum=0;
        fo(i,n){
           int x;
           cin>>x;
           p.push_back(x);
           esum+=p[i];
        }
        fo(i,n){
           if(p[i]>k)
           {
           	p[i]=k;
           }
           asum+=p[i];
        }
        cout<<esum-asum<<"\n";
     }
   return 0;
}