//Operator Overloading is giving power to existing operators to work with
//object that is user defined data type as that they are working with built in data type.
//Not all operators can be overloaded,Scope resolution (::),Dot operator(.),size of operator(sizeof()), Conditional operator(? :)
//Rest all can be overloaded
#include<iostream>
using namespace std;
class Op
{
   int real;
   int img;

   public:
      Op(int r=0,int i=0)
      {
        real=r;
        img=i;
      }
      void putdata()
      {
        cout<<real<<"+i"<<img<<endl;
      }
      Op operator +(Op C2)
      {
        Op C3;
        C3.real=real+C2.real;
        C3.img=img+C2.img;
        return C3;
      }

};
int main()
{
    Op A(18,20),B(4,9),C;
    A.putdata();
    B.putdata();
    C=A+B;         //Behind the scene A.operator+(B) 
    C.putdata();
    return 0;
}

//Friend Function
// C=A+B; if it would have been friend function then behind the scene working would be
// C=operator+(A,B) , Because there is no object calling,Object is taken as argument.

//Friend Function for unary opeartor,Like increment
//A++; Behind the scene operator++(A)

//Member Function for unary opeartor,Like increment
//A++; Behind the scene A.operator++()

//Operator Overloading    No.of Arguments passed                   No.of Arguments passed
                           //Binary Operator                          //Unary Operator  
//Member Fun.                 1(1obj. calling, 1 as argument)                 0
//Friend Fun.                 2                                               1
