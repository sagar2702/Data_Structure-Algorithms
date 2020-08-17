#include<iostream>
#include<string>
//#include<algorithm>
using namespace std;

int main(){
	string str;
    cin>>str;
    int n=str.size();
    for(int i=0;i<n/2;i++){
        char tc=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=tc;
    }
    //reverse(str.begin(),str.end());
    cout<<str;
    return 0;
 }