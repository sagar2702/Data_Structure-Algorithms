#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s,st;
	    cin>>s>>st;
	    int arr[26]={0},flag=0;
	    for(char x:s){
	        int i=x-97;
	        arr[i]++;
	    }
	    for(char x:st){
	        int i=x-97;
	        arr[i]--;
	    }
	    for(int i=0;i<26;i++){
	       if(arr[i]!=0){
	            flag=1;
	            cout<<"NO";
	            break;
	        }
	    }
	    if(flag==0) cout<<"YES";
	    cout<<endl;
	}
	return 0;
}