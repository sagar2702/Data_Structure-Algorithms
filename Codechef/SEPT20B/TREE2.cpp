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

//use \n instead of endl
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
    ll count = 1, zeroes = 0;
    cin >> n;
    vll arr(n);
    fo(i, n)
    {
      cin >> arr[i];
      if (arr[i] == 0) zeroes++;
    }
    if (zeroes == n) {
      cout << "0\n";
      continue;
    }
    sort(all(arr));
    frx(i, 1, n) {
      if (arr[i - 1] == 0) break;
      if (arr[i] != arr[i - 1]) count++;
    }
    cout << count << "\n";
  }
  return 0;
}
