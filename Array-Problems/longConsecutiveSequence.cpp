#include<algorithm>
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
	    sort(arr,arr+n);
	    int count=1,tcount=1;
	    for(int i=1;i<n;i++){
	       // cout<<arr[i]<<" ";
	        if(arr[i]==arr[i-1]){
	            continue;
	        }
	        if(arr[i]==arr[i-1]+1){
	            tcount++;
	        }else{
	            if(tcount>count) count=tcount;
	            tcount=1;
	        }
	    }
	    if(tcount>count) count=tcount;
	    cout<<count<<endl;
	}
	return 0;
}