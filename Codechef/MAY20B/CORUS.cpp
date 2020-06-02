#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,c;
	    cin>>n>>c;
	    string str;
	    cin>>str;
	    long int a[26]={0};
	    for(string::size_type i=0;i<str.size();i++)
	    {
	        int x=str[i];
	        a[x-97]++;
	    }
	    while(c--)
	    {
	        long int x,count=0;
	        cin>>x;
	        for(int i=0;i<26;i++)
	        {
	            if(a[i]-x>0)
                  count+=a[i]-x;
	        }
	        cout<<count<<"\n";
	    }
	    
	}
	return 0;
}