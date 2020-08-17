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
    ll t,n;
    cin>>t;
    while(t--)
     {
     	int pair=0;
     	string str;
     	cin>>str;
     	for(string::size_type i=0;i<str.size();i++)
     	{
             if(i!=str.size())
             {
             	if(str[i]=='x'&&str[i+1]=='y'||str[i+1]=='x'&&str[i]=='y')
             	{
             		pair++;
             		i++;
             	}
             }
     	}
     	cout<<pair<<"\n";
     }
   return 0;
}