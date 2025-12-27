//Pointer object is accessed using -> operator.
#include<iostream>
using namespace std;
class Demo{
    int x;
    int y;

    public:
     void getdata()
     {
        cout<<"Enter the values of x and y"<<endl;
        cin>>x>>y;
     }

     void putdata()
     {
        cout<<"The values of x and y are"<<x<<" "<<y<<endl;
     }

     int Sum()
     {
        int c;
        c=x+y;
        return c;
     }
};
int main()
{
    Demo A;
    Demo *B;
    B=&A;
    int ans;           //Normally with Dot operator
    B->getdata();      //A.getdata();
    B->putdata();      //A.putdata();
    ans=B->Sum();      //A.Sum();
    cout<<"The sum is "<<ans<<endl;

    return 0;
}

//Base class pointer variable stroes the address of object of its own and all of the
//objects of its derived class.
//Vice versa not true i.e Derived class Pointer obj can't store add of obj of base class.