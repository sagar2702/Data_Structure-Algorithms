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
//#define count(x) __builtin_popcountll(x)
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
        ll n;
        bool flag=false;
        cin>>n;
        vll arr;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            arr.push_back(x);
        }
        ll count=0;
        sort(arr.begin(),arr.end());
        set<ll> a,b;
        if(arr[n-2]==arr[n-1]) 
         {
           cout<<"NO\n";
           continue;
         }
        fo(i,n){
             if(i%2==0)
             {
                 if(a.count(arr[i])==1)
                 {
                    cout<<"NO\n";
                    flag=true;
                    break;
                 }
                 a.insert(arr[i]);
             }else
             {
                if(b.count(arr[i])==1)
                 {
                    cout<<"NO\n";
                    flag=true;
                    break;
                 }
                 b.insert(arr[i]);
             }
        }
        if(flag) continue;
       cout<<"YES\n";
       set<ll> :: iterator itr1;
       set<ll> ::reverse_iterator  itr2;
       for(itr1=a.begin();itr1!=a.end();itr1++)
         cout<<*itr1<<" ";
       for(itr2=b.rbegin();itr2!=b.rend();itr2++)
         cout<<*itr2<<" ";
        cout<<"\n";

    }
   return 0;
}

