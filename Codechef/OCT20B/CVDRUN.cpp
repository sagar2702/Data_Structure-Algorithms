#include<bits/stdc++.h>
#define ll long long
#define setBitCount(x) __builtin_popcountll(x)
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
  ll t, n, x, y, k;
  cin >> t;
  while (t--)
  {
    cin >> n >> k >> x >> y;
    if (x == y) {
      cout << "YES\n";
      continue;
    }
    ll z = (x + k) % n;
    if (z == y)
    {
      cout << "YES\n";
      continue;
    }
    bool flag = false;
    while (z != x)
    {
      z = (z + k) % n;
      // cout << z << " ";
      if (z == y) {
        flag = true;
        break;
      }
    }
    if (flag) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
