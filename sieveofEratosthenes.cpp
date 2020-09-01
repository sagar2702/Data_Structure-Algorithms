#include <iostream> 
#include <vector>
using namespace std;

vector<bool> sieveofEratosthenes(int n){
    vector<bool> prime(n+1,true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=n;i++){
            for(int j=i*i;j<=n;j+=i) prime[j]=false;
  
    }
    return prime;
}

int main()
{
   int n;
   cin>>n;
   vector<bool> isPrime= sieveofEratosthenes(n);
   cout<<"Prime Numbers between 1 to "<<n<<"\n";
   for(int i=0;i<=n;i++){
       if(isPrime[i]==true) cout<<i<<" ";
   }
   
   return 0;
}