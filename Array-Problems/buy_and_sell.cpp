/*
 
 problem link: https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-twice/

*/


#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
    int max1=0,max2=0,flag=0;
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[j-1]){
                flag=1;
                int x=arr[j-1]-arr[i];
                if(x>max1){
                   max2=max1;
                   max1=x;
                } 
                i=j-1;
                break;
            }
        }
        if(flag==0){
            int x=arr[n-1]-arr[i];
            if(x>max1){
                   max2=max1;
                   max1=x;
                } 
            break;
        }
    }
    cout<<max1+max2<<endl;
	return 0;
 }