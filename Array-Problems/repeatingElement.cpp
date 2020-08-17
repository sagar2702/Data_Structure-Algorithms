#include <iostream>
#include <map>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    map<int,int> mp;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    int flag=0;
	    for(int i=0;i<n;i++){
	        if(mp[arr[i]]>1){
	            flag=1;
	            cout<<i+1;
	            break;
	        }
	    }
	    if(flag==0) cout<<"-1";
	    cout<<endl;
	}
	return 0;
}