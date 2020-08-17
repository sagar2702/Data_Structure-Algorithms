#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n],b[m];
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    int flag=0;
	    for(int i=0;i<m;i++){
	        if(mp.find(b[i])==mp.end()){
	            cout<<"No";
	            flag=1;
	            break;
	        }
	        if(mp[b[i]]==0){
	            cout<<"No";
	            flag=1;
	            break;
	        }
	        mp[b[i]]--;
	    }
	    if(flag==0) cout<<"Yes";
	    cout<<endl;
	}
	return 0;
}