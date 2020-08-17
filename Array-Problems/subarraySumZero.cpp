#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int flag=0;
	    for(int i=0;i<n;i++){
	        int a=arr[i];
	        int flag1=0;
	        if(a==0){
	            flag=1;
	            flag1=1;
	            cout<<"Yes";
	            break;
	        }
	       for(int j=i+1;j<n;j++){
	           a+=arr[j];
	           if(a==0){
	               flag1=1;
	               flag=1;
	               cout<<"Yes";
	               break;
	           }
	       } 
	       if(flag1==1) break;
	    }
	    if(flag==0) cout<<"No";
	    cout<<endl;
	}
	return 0;
}