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
  map<string, char> mp;
  mp["0000"] = 'a'; mp["0001"] = 'b'; mp["0010"] = 'c'; mp["0011"] = 'd'; mp["0100"] = 'e'; mp["0101"] = 'f'; mp["0110"] = 'g'; mp["0111"] = 'h';
  mp["1000"] = 'i'; mp["1001"] = 'j'; mp["1010"] = 'k'; mp["1011"] = 'l'; mp["1100"] = 'm'; mp["1101"] = 'n'; mp["1110"] = 'o'; mp["1111"] = 'p';
  string input, output = "", temp = "";
  cin >> n >> input;
  m = 0;
  for (auto x : input) {
    m++;
    temp += x;
    if (m % 4 == 0) {
      output += mp[temp];
      temp = "";
    }
  }

  cout << output;
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


