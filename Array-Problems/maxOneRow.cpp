#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr[n][m];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            cin>>arr[i][j];
	        }
	    }
	    int count=0,rowindex;
	    for(int i=0;i<n;i++){
	        int tcount=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1) tcount++;
	        }
	        if(tcount>count){
	            count=tcount;
	            rowindex=i;
	        } 
	    }
	    cout<< rowindex;
	    cout<<endl;
	}
	return 0;
}