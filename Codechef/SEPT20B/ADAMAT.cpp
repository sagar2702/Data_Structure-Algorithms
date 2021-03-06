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
  ll t, n, m, q;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int arr[n][n];
    fo(i, n) {
      fo(j, n) {
        cin >> arr[i][j];
      }
    }
    int count = 0;
    int flag = 1;
    for (int i = n - 1; i >= 0; i--) {
      if (arr[0][i] != i + 1 && flag == 1) {
        count++;
        flag = 0;
      }
      if (arr[i][0] != i + 1 && flag == 0) {
        count++;
        flag = 1;
      }
    }
    cout << count << "\n";
  }
  return 0;
}
