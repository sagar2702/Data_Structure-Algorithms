#include<bits/stdc++.h>
#define ll long long
#define fo(i,n) for(ll int i=0;i<n;++i)
#define fr(i,n) for(ll int i=n-1;i>=0;--i)
#define fox(i,a,n) for(ll int i=a;i<n;i++)
#define vl vector<long>
#define vll vector<ll>
#define vi vector<int>
#define vc vector<char>
#define all(x) x.begin(),x.end()
#define count(x)  __builtin_popcountll(x)
#define N 1000000007
using namespace std;

int check(ll x)
{
	while(x%2==0)
	{
        x=x/2;
	}
	if(x==1)
	{
		return 1;
	}else
	{
		return 0;
	}
}
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
     	cin>>n;
     	if(n==1||n==2||check(n))
     	{
     		cout<<"0\n";
     		continue;
     	}
     	if(n%2!=0)
     	{
     		cout<<n/2<<"\n";
     	}else{
     		ll y=2;
     		while(n%y==0)
     		{
     			y=y*2;
     		}
     		cout<<n/y<<"\n";
     	}

     }
   return 0;
}
