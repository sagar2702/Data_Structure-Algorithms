#include<iostream>
#define ll long long
#define N 1000000007
using namespace std;

ll large_power(ll x,ll y){
    ll result=1;
    while(y>0)
    {
        if(y&1)
        {
            result=(result*x)%N;
        }
        y=y/2; //or y>>2;
        x=(x*x)%N;
    }
    return result;
}

int main()
{
    ll base,ep;
    cin>>base>>ep;
    cout<<large_power(base,ep);
    return 0;
}