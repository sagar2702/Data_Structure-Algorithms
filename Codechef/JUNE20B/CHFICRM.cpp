#include<bits/stdc++.h>
#define ll long long
#define fo(i,n) for(ll int i=0;i<n;++i)
#define fr(i,n) for(ll int i=n-1;i>=0;--i)
#define fox(i,a,n) for(ll int i=a;i<n;i++)
#define vl vector<long>
#define vll vector<ll>
#define vi vector<int>
#define vc vector<char>
#define all(x) x.begin(),x.end()
#define count(x)  __builtin_popcountll(x)
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
    ll t,n;
    cin>>t;
    while(t--)
     {
     	cin>>n;
     	vi pq;
     	int flag=0;
     	int coinscount[3]={0,0,0};
     	for(int i=0;i<n;i++)
     	{
     		int x;
     		cin>>x;
     		pq.push_back(x);
     	}
     	for(int i=0;i<n;i++)
     	{
     		if(pq[0]==10||pq[0]==15)
     		{
     			flag=1;
     			break;
     		}
            coinscount[(pq[i]/5)-1]++;
            if(i!=0 && pq[i]!=5)
            {
            	int x=(pq[i]-5)/5;
            	if(coinscount[x-1]>=1)
            	{
                    coinscount[x-1]--;
            	}else if(x==2 && coinscount[0]>=2)
            	{
            		coinscount[0]=coinscount[0]-2;
            	}else
            	{
            		flag=1;
            		break;
            	}
            }

     	}
     	if(flag==1)
     	{
     		cout<<"NO\n";
     	}else
     	{
     		cout<<"YES\n";
     	}
     }
   return 0;
}