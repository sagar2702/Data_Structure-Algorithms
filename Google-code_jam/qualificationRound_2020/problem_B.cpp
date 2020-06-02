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
    ll t,n,a,b=1;
    cin>>t;
    while(t--)
    {
       string str;
       cin>>str;
       vector<char> str1;
       int poc=0;
       for(size_t i=0;i<str.length();i++)
       {
           int x=(int)str[i]-'0';
           while(poc<x)
           {
               str1.push_back('(');
               poc++;
           }
           while(poc>x)
           {
               str1.push_back(')');
               poc--;
           }
           str1.push_back(str[i]);
       }
       while(poc--)
       {
           str1.push_back(')');
       }
        cout<<"Case #"<<b<<": ";
        n=str1.size();
        fo(i,n)
        {
            cout<<str1[i];
        }
        cout<<"\n";
        b++;
    }
   return 0;
}
