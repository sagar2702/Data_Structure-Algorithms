/*

problem link: https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0

*/



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
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int count=0;
	    int flag=0;
	    int i=0;
	    while(i<n){
	        if(arr[i]+i>=n-1){
	            count++;
	            break;
	        }
	        int max=0,ti;
	        for(int j=i+1;j<=arr[i]+i;j++){
	            if(arr[j]+j>max){
	                max=arr[j]+j;
	                ti=j;
	            }
	        }
	       // cout<<max<<" ";
	        if(max==0){
	            flag=1;
	            break;
	        }
	        i=ti;
	        count++;
	    }
	    if(flag==1) cout<<"-1";
	    else cout<<count;
	    cout<<endl;
	}
	return 0;
}