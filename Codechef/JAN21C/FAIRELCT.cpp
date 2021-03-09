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
  cin >> n >> m;
  ll vote1 = 0, vote2 = 0, swaps = 0;
  priority_queue<ll, vector<ll>, greater<ll>> a;
  priority_queue<ll> b;
  fo(i, n) {
    cin >> p;
    vote1 += p;
    a.push(p);
  }
  fo(i, m) {
    cin >> p;
    vote2 += p;
    b.push(p);
  }
  if (vote1 > vote2) {
    cout << "0";
  } else {
    k = min(n, m);
    fo(i, k) {
      x = a.top();
      y = b.top();
      if (x > y) break;
      a.pop();
      b.pop();
      a.push(y);
      b.push(x);
      vote1 -= x; vote1 += y;
      vote2 -= y; vote2 += x;
      swaps++;
      if (vote1 > vote2) break;
    }
    if (vote1 > vote2)
    {
      cout << swaps;
    } else {
      cout << "-1";
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


