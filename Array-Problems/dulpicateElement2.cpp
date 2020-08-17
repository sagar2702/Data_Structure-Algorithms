/*

problem link:https://practice.geeksforgeeks.org/problems/two-repeated-elements/0

*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n+2];
	    vector<int> res;
	    for(int i=0;i<n+2;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n+2;i++){
	        if(arr[abs(arr[i])-1]>0){
	            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
	        }else{
	            res.push_back(abs(arr[i]));
	        }
	    }
	    for(int i=0;i<2;i++){
	        cout<<res[i]<<" ";
	    }
	   cout<<endl;
	}
	return 0;
}