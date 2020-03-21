//this code gives how many objects are created of a class in entire program
//it counts those objects also which are created at runtime and deleted later (see line 26 and 27)

#include<iostream>
using namespace std;

class Myclass
{
    public:
    static int objs;//only once storage allocated, all created object gets copy of this variable
    Myclass()//constructor, automatically called when object is created
    {
        objs++;
    }
};

int Myclass::objs=0;
int main()
{
    Myclass a, b,c;//3
    int x=0;
    if(x==0)
    {
        Myclass d;//3+1=4
    }
    Myclass *ptr1=new Myclass;//4+1=5
    delete ptr1;
    cout<<Myclass::objs;
    return 0;
}
