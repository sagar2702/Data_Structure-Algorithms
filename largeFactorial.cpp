#include <iostream>
#define MAX 100000
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int fact[MAX];
        int carry=0,curr_size=1;
        fact[0]=1;
        for(int i=2;i<=n;i++){
            for(int j=0;j<curr_size;j++){
                int res=fact[j]*i+carry;
                fact[j]=res%10;
                carry=res/10;
            }
            while(carry>0){
                fact[curr_size++]=carry%10;
                carry=carry/10;
            }
        }
        for(int i=curr_size-1;i>=0;i--){
            cout<<fact[i];
        }
        cout<<endl;
    }
	return 0;
}