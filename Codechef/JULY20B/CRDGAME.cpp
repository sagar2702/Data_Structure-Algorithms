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


int digitSum(ll n)
{
    int sum=0;
     while(n!=0)
     {
         sum=sum+n%10;
         n/=10;
     }
     return sum;
}

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
        cin>>n;
        ll player1=0,player2=0;
        fo(i,n)
        {
            cin>>a>>b;
            if(digitSum(a)>digitSum(b))
            {
                player1++;
            }else if(digitSum(a)<digitSum(b))
            {
                player2++;
            }else{
                player2++;
                player1++;
            }
        }
        if(player1>player2){
            cout<<"0 "<<player1<<"\n";
        }else if(player1<player2)
        {
            cout<<"1 "<<player2<<"\n";
        }else{
            cout<<"2 "<<player1<<"\n";
        }
        
    }
   return 0;
}

