#include<iostream>
using namespace std;
class PQR;
class XYZ{
    int real;
    int img;

    public:
       void getdata(int r,int i)
       {
        real=r;
        img=i;
       }

       void putdata()
       {
        cout<<real<<" "<<img<<endl;
       }

       friend void Compare(XYZ ,PQR ); 
       //Friend function can be declared friend anywhere in the class,
       //private or public,Irrespective of altering its meaning.
};

class PQR{
    int real;
    int img;

    public:
       void getdata(int r,int i)
       {
        real=r;
        img=i;
       }

       void putdata()
       {
        cout<<real<<" "<<img<<endl;
       }

       friend void Compare(XYZ,PQR); 
       //Friend function is a normal function,
       //Nothing to do with class name, Just declare friend inside class that's it.
       //Normal return type.
};
void Compare(XYZ C,PQR B)
{
     if(C.real>B.real)
     {
        cout<<"Class XYZ is big!"<<endl;
     }
     else
       cout<<"Class PQR is big!"<<endl;  
}

int main()
{
    XYZ C;
    PQR B;
    int r,i;
    cout<<"Enter values of r & i for XYZ";
    cin>>r>>i;
    C.getdata(r,i);
    cout<<"Enter values of r & i for PYQ";
    cin>>r>>i;
    B.getdata(r,i);
    C.putdata();
    B.putdata();
    Compare(C,B); 
    return 0;
}