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
    cin >> n >> m;
    vector<ll> arr(n);
    fo(i, n)
    {
      cin >> arr[i];
    }
    int flag = 0;
    ll days = 0, temp = 0;
    fo(i, n)
    {
      days++;
      arr[i] = arr[i] + temp;
      if (arr[i] < m)
      {
        flag = 1;
        break;
      }
      temp = arr[i] - m;
      // cout << arr[i] << " ";
    }
    if (flag == 1)
    {
      cout << days << "\n";
      continue;
    }
    days += arr[n - 1] / m;
    cout << days << "\n";
  }
  return 0;
}
