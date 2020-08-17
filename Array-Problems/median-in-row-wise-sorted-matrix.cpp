#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr[n*m];
	    for(int i=0;i<n*m;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+(n*m));
	    cout<<arr[n*m/2];
	    cout<<endl;
	}
	return 0;
}