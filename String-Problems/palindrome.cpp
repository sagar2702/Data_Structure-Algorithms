#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    int flag=0;
	    for(int i=0;i<n/2;i++){
	        if(str[i]!=str[n-i-1]){
	            cout<<"No";
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0) cout<<"Yes";
	    cout<<endl;
	}
	return 0;
}