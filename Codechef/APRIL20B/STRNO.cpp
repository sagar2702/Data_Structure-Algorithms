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
   ll t,n,k,b;
    cin>>t;
    while(t--)
    {
      cin>>n>>k;
      vi P; 
     while (n%2 == 0) 
     { 
        P.push_back(2); 
        n /= 2; 
     } 
    for (int i=3; i*i<=n; i=i+2) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            P.push_back(i); 
        } 
    } 
     if (n > 2) 
        P.push_back(n); 
    if (P.size() < k) 
    { 
       cout<<"0\n";
    }else
    {
      cout<<"1\n";
    }
      
    }
   return 0;
}