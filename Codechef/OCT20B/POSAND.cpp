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
#define setBitCount(x) __builtin_popcountll(x)
#define N 1000000007
using namespace std;

void swap(int &a, int &b) {
  int t = a;
  a = b;
  b = t;
}


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ll t, n, m, q;
  cin >> t;
  while (t--)
  {
    cin >> n ;
    if (n == 1)
    {
      cout << "1\n";
      continue;
    }
    if (!(n & n - 1)) {
      cout << "-1\n";
      continue;
    }
    if (n == 3) {
      cout << "2 3 1\n";
      continue;
    }
    cout << "2 3 1 ";
    ll x = 4, y = 1;
    while (x <= n)
    {
      if ((y & x) == 0)
      {
        cout << x + 1 << " ";
        cout << x << " ";
        y = x;
        x = x + 2;
      } else {
        cout << x << " ";
        y = x;
        x++;
      }
    }
    cout << "\n";
  }
  return 0;
}


