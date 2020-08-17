#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str="I evoL !!uoY";
   stack<char> st;
   for(char x:str){
       if(x==' '){
           while(!st.empty()){
               cout<<st.top();
               st.pop();
           }
           cout<<' ';
           continue;
       }
       st.push(x);
   }
   while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
   return 0;
}