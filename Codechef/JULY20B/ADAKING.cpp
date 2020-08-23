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
    ll t,n,a,b,c,k,l,m;
    cin>>t;
    while(t--)
    {
       vector<vector<char>> chess(8, vector<char>(8,'X'));
       cin>>n;
       a=0;
       chess[0][0]='O';
       fo(i,8)
       {
        fo(j,8)
        {
            if(n>1&&chess[i][j]!='O')
            {
                chess[i][j]='.';
                a=i;
                n--;
            }else
            {
                if(i!=a && i!=a+1)
                {
                   chess[i][j]='.';
                }
            }
        }
       }
       fo(i,8)
       {
        fo(j,8)
        {
           cout<<chess[i][j];
        }
        cout<<"\n";
       }
    }
   return 0;
}

