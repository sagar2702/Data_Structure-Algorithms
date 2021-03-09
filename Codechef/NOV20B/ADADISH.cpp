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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ll t, n, m, q, x, p, k;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    vl arr(n);
    fo(i, n) {
      cin >> arr[i];
    }
    sort(all(arr));
    reverse(all(arr));
    int minTime = 0;
    fo(i, n - 1) {
      ll t = min(arr[i], arr[i + 1]);
      minTime += t;
      arr[i + 1] = abs(arr[i] - arr[i + 1]);

    }
    minTime += arr[n - 1];
    cout << minTime << "\n";
  }
  return 0;
}


