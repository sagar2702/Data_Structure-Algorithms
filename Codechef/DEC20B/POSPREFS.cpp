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
  cin >> n >> k;
  vi arr(n + 1, 0);
  fo(i, n + 1) {
    arr[i] = i;
  }
  x = n - k;
  int i = 1;
  while (x > 0 && i <= n) {
    arr[i] = -arr[i];
    i += 2;
    x--;
  }
  if (n % 2 == 0) p = n;
  else p = n - 1;
  while (x > 0) {
    arr[p] = -arr[p];
    x--;
    p = p - 2;
  }
  fox(i, 1, n + 1) {
    cout << arr[i] << " ";
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


