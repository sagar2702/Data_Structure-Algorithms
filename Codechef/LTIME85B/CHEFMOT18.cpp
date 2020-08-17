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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>s>>n;
        if(s==1)
        {
           cout<<"1\n";
           continue; 
        } 
        if(s<=n)
        {
            if(s%2==0) 
                cout<<"1\n";
            else
                cout<<"2\n";
            continue;
        }
        ll count=0;
        while(n!=0)
        {
            ll t=s/n;
            count+=t;
            s=s-(t*n);
            if(s%2==0)
            {
                n=s;
            }else
            {
                n=s-1;
            }
        }
        cout<<count+s<<"\n";
    }
   return 0;
}

