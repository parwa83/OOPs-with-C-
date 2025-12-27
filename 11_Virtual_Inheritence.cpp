//Single Inheritence: 1 Base class,1 Derived class
//Multilevel Inheritence: 1 Base class, Derived class 1(Base class for D2), Derived class 2(D2)
//Multiple Inheritence: Multiple Base class, 1 Derived class
//Hierarchical Inheritence: 1 Base class, Multiple Derived class.
//              B1
//   |----------|-----------|
//   |                      |
//   D1                     D2
//   |                      |
//   |----------|-----------|
//             DD3
//Hybrid : First Hierarchical and then Multiple.
//There is 1 issue, The DD3 will have 2 copies of B1(i.e indirect Base class to it) attributes.
// To solve this we use " Virtual Inheritence".
#include<iostream>
using namespace std;
class Grandparent
{
    int x,y;

    public:
    void getdata1()
    {
        cout<<"Enter values for x and y"<<endl;
        cin>>x>>y;
    }
    
    void putdata1()
    {
        cout<<"The values of x and y"<<x<<y<<endl;
    }
};

class Base1:virtual public Grandparent
{
    int p,q;
    public:
    void getdata2()
    {
        cout<<"Enter values for p and q"<<endl;
        cin>>p>>q;
    }
        void putdata2()
    {
        cout<<"The values of p,q"<<p<<q<<endl;
    }

};

class Base2:public virtual Grandparent
{
    int r,t;
    public:
    void getdata3()
    {
        cout<<"Enter values for r and t"<<endl;
        cin>>r>>t;
    }
    void putdata3()
    {
        cout<<"The values of r,t"<<r<<t<<endl;
    }

};

class child:public Base1,public Base2
{
    int o,p;
    public:
    void getdata4()
    {
        cout<<"Enter values for o and p"<<endl;
        cin>>o>>p;
    }
    void putdata4()
    {
        cout<<"The values of o and p"<<o<<p<<endl;
    }


};
int main()
{
    child C;
    C.getdata1();
    C.getdata2();
    C.getdata3();
    C.getdata4();
    C.putdata1();
    C.putdata2();
    C.putdata3();
    C.putdata4();
    return 0;
}