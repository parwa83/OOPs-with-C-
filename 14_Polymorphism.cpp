//Polymorphism: One the most imp. concept of OOPs.
//It means one thing, many form.
//Same function perform differently according to the calling type.
//Polymorphism is of 2 types:
// 1)Compile time/Early/static binding polymorphism --> Function Overloading, Operator Overloading
// 2)Run time/Late/Dynamic binding polymorphism --> Virtual Function


//Function Overloading: Functions have same name, Different Arguments, Return type does't matter.
//What differ Functions of same name is (No. of Arguments, Types of Arguments, Order of Arguments) NTO

// #include<iostream>
// using namespace std;
// void Fun(int a,int b)  
// {
//     int c;
//     c=a+b;
//     cout<<c<<endl;
// }
// void Fun(int a)           //No. of Arguments differ from 1st Fun
// {
//     int c;
//     c=a+10;
//     cout<<c<<endl;
// }
// void Fun(string a,string b)  //No. of Arguments is same like 1st Fun,But type differs, Like this Order can also differ
// {
//     string c;
//     c=a+b;
//     cout<<"My name is "<<c<<endl;
// }
// void Fun(string b,int k)
// {
//     cout<<b<<" "<<k<<endl;
// }
// int main()
// {
//     Fun(7,8);
//     Fun(10);
//     Fun("Parwa","Agrawal");
//     Fun("Pushpa",7);
//     return 0;
// } 


//Constructor Overloading: Same name obvious but different signatures(NTO)

// #include<iostream>
// using namespace std;
// class Demo
// {
//     int x;
//     float y;
//     char z;

//     public:
//     Demo(int a)
//     {
//         x=a;
//         y=0;
//         z='0';
//         cout<<x<<" "<<y<<" "<<z<<endl;
//     }
//     Demo(float b)
//     {
//         x=0;
//         y=b;
//         z='0';
//         cout<<x<<" "<<y<<" "<<z<<endl;
//     }
//     Demo(char c)
//     {
//         x=0;
//         y=0;
//         z='P';
//         cout<<x<<" "<<y<<" "<<z<<endl;
//     }

//     //All have same no. of arguments but different type.

//     Demo(int a,float b,char c)
//     {
//         x=a;
//         y=b;
//         z=c;
//         cout<<x<<" "<<y<<" "<<z<<endl;
//     }

//     Demo(float b,int a,char c)
//     {
//         x=a;
//         y=b;
//         z=c;
//         cout<<x<<" "<<y<<" "<<z<<endl;
//     }
//     // No. of Arguments same, Type Arguments same,
//     //But Order differs.
// };
// int main()
// {
//     Demo D(12);
//     Demo B('P');
//     Demo C(7.7f);
//     Demo K(15,9.8,'P');
//     Demo P(10.7,12,'L');
//     return 0;
// }


//Operator Overloading:
#include<iostream>
using namespace std;
class Complex
{
    int r,i;
    public:
      Complex(int a,int b)  
      {
        r=a;
        i=b;
      }

      Complex(int a)      //Different no.
      {
        r=a;
        i=a;
      }

      Complex(void)       
      {
        r=0;
        i=0;
      }

      Complex operator +(Complex c2)
      {
        Complex c3;
        c3.r=r+c2.r;    //One with no obj. works for calling object.
        c3.i=i+c2.i;    //One with no obj. works for calling object.
        return c3;
      }

      void putdata()
      {
        cout<<"The sum of 2 complex no. is "<<r<<" +i "<<i<<endl;
      }
};
int main()
{
    Complex A(15,20),B(9),C;
    C=A+B;     //same as A.operator+(B) here A is the calling obj. and B is passed as argument.
    C.putdata();
    return 0;
}


