#include<bits/stdc++.h>

using namespace std;

int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        if(n<=3)
        {
            cout<<"1\n";
            cout<<n<<" ";
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }else
        {
             //#days
                cout<<n/2<<"\n";
                cout<<"3 1 2 3\n";
                for(long int i=4;i<=n;i=i+2)
                {
                    if(i%2==0&&i!=n)
                    {
                        cout<<"2 ";
                    }
                    if(i%2==0&&i==n)
                    {
                        cout<<"1 ";
                    }
                    if(i==n)
                    {
                        cout<<i<<"\n";
                    }else
                    {
                        cout<<i<<" "<<i+1<<"\n";
                    }
                    
                    
                }
        }
       
    }
    return 0;
}