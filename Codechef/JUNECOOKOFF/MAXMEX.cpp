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
// #define count(x) __builtin_popcountll(x)
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vi arr;
        fo(i,n)
        {
            ll x;
            cin>>x;
            arr.push_back(x);
        }
        set<ll> check;
        sort(arr.begin(),arr.end());
        ll count=0,tcount=0,first=-1;
        ll lower=lower_bound(arr.begin(),arr.end(),m)-arr.begin();
        fo(i,n)
        {
            if(arr[i]>m)
            {
                count++;
            }
            if(arr[i]<m)
            {
                check.insert(arr[i]);
            }
        }
        frx(i,1,m)
        {
            if(check.empty()) break;
            if(check.count(i)==1)
            {
                tcount++;
            }else
            {
                break;
            }
        }
        if(tcount==m-1)
        {
            cout<<count+lower<<"\n"; 
        }else
        {
            cout<<"-1\n";
        }     
    }
   return 0;
}