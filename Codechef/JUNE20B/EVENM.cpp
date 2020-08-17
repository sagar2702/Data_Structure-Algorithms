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

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t,n,x;
    cin>>t;	
    while(t--)
     {
     	cin>>n;
     	vll a; 
     	bool rev=false;
     	for(ll i=1;i<=n*n;i++)
     	{
              a.push_back(i);
     	}
     	for(ll i=1;i<=n*n;i++)
     	{
     	    if(!rev)
     	    {
     	         cout<<a[i-1]<<" "; 
     	    }else{
     	          x=i+n-1;
     	          while(x>=i)
     	          {
     	              cout<<a[x-1]<<" ";
     	              x--;
     	          }
     	          i=i+n-1;
     	    }
            
              if(i%n==0)
              {
                  cout<<"\n";
                  rev=!rev;
              }
     	}
     	
     }
   return 0;
}