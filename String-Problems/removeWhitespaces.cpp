#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string str;
	// if using cin before getline in anywhere in code not forget to include 
	//cin.ignore()
	getline(cin,str);
    str.erase(remove(str.begin(),str.end(),' '),str.end());
    cout<<str<<endl;
    return 0;
 }