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

void solve() {
  ll n, m, q, x, p, y, k;
  cin >> n >> k >> x >> y;
  if (x == y) {
    cout << n << " " << n;
  } else {
    map<int, pair<ll, ll>> mp;
    if (x == y) {
      cout << n << " " << n;
    } else {
      if (x > y) {
        mp[0].first = n;
        mp[0].second = y + n - x;
        mp[1].first = y + n - x;
        mp[1].second = n;
        mp[3].first = x - y;
        mp[3].second = 0;
        mp[2].first = 0;
        mp[2].second = x - y;
      } else {
        mp[0].first = x + n - y;
        mp[0].second = n;
        mp[1].first = n;
        mp[1].second = x + n - y;
        mp[3].first = 0;
        mp[3].second = y - x;
        mp[2].first = y - x;
        mp[2].second = 0;
      }
      cout << mp[(k - 1) % 4].first << " " << mp[(k - 1) % 4].second;
    }
  }
  cout << "\n";
}


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}


