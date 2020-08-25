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
    ll t,n,x,y,a,b,c,k,l,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<ll> arr(n);
        fo(i,n){
          cin>>arr[i];
        }
        ll min=INT_MAX,tables=1;
        set<ll> s;
          fo(i,n){
            if(s.count(arr[i])==1){
              tables++;
              s.clear();
            }
            s.insert(arr[i]);
        }
        l=0;
        while(l<n){
          unordered_map<ll,ll> mp1,mp2;
          for(ll i=0;i<=l;i++){
              mp1[arr[i]]++;
          }
          for(ll i=l+1;i<n;i++){
            mp2[arr[i]]++;
          }
          ll count1=k,count2=k;
          for(auto x:mp1){
            if(x.second>1) count1+=x.second;
          }
          for(auto x:mp2){
            if(x.second>1) count2+=x.second;
          }
          if(l==n-1) count2=0;
          // cout<<count1<<" "<<count2<<"\n";
          if(count1+count2<min) min=count1+count2;
          l++;
        }
        if(k*tables<min) cout<<k*tables;
        else cout<<min;
        cout<<endl;

    }
    return 0;
}
