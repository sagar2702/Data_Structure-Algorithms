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

ll countDays(ll n, ll x, ll m, ll y, ll p) {
  ll days = 0;
  while (days < n - 1 && days < m - 1) days++;
  while (m != n && p > 0) {
    days++;
    p = p - y;
    m++;
  }
  x = x + y;
  y = ceil((double)p / x);
  days += y;
  return days;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ll t, n, m, q, x, p, y, k;
  // cin >> t;
  // while (t--)
  // {

  // }
  cin >> n >> x >> m >> y >> p;
  if (n >= m) {
    cout << countDays(n, x, m, y, p);
  } else {
    cout << countDays(m, y, n, x, p);
  }
  return 0;
}


