#include<iostream>
using namespace std;
class Base{
    int r,i;

    public:
    Base(int R,int I)
    {
        r=R;
        i=I;
    }
    void putdata()
    {
        cout<<"Value are"<<r<<" "<<i;
    }
};
class Derived:public Base
{
    int p,s,t;

    public:
    Derived(int R,int I,int P,int S,int T):Base(R,I)
    {
        p=P;
        s=S;
        t=T;
    }
    void putdata()
    {
        cout<<"Value are"<<p<<" "<<s<<" "<<t<<endl;
    }
};
int main()
{
    Derived D(12,15,20,30,40);
    D.putdata();          //Derived class obj will call derived class member function(putdata) by default
    D.Base::putdata();    //To call Base class,From Der. class obj mention obj.<Baseclass_name> :: <member_function>
    return 0;
}