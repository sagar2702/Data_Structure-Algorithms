#include <iostream>
#include <limits.h>
using namespace std;

int minEle(int arr[],int l,int h){
    if(l>h) return arr[0];
    if(l==h) return arr[l];
    
    int mid = l+(h-l)/2;
    if(mid>l && arr[mid]<arr[mid-1]) return arr[mid];
    if(mid<h && arr[mid]>arr[mid+1]) return arr[mid+1];
    
    if(arr[mid]>arr[h]) return minEle(arr,mid+1,h);
    else return minEle(arr,l,mid-1);
     
}

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
         cout<<minEle(arr,0,n-1);
         cout<<endl;
	}
	
	return 0;
}