#include <iostream>
#include <algorithm>
#include <limits.h>
#define ll long long
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll arr[n];
	    for(ll i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    ll a=0;
	    ll maxSum=-999999;
	    for(ll i=0;i<n;i++){
	        a+=arr[i];
	        maxSum=max(a,maxSum);
	        if(a<0) a=0;
	    }
	    cout<<maxSum<<endl;
	}
	return 0;
}