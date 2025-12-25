//Object as argument to member function.
//Program to print sum of 2 complex numbers by passing object as function argument
#include<iostream>
using namespace std;
class Complex{
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
        cout<<"The complex number is"<<real<<"+i"<<img<<endl;
       }

       Complex Sum(Complex C2)
       {
        Complex C3;
        C3.real=real+C2.real;     //The one(real) with no object is working for calling object i.e. is A.
        C3.img=img+C2.img;        //The one(img) with no object is working for calling object i.e. is A.
        return C3;                // C2 is for B, And C3 returns value that is saved in C.
       }
};

int main()
{
    Complex A,B,C;
    A.getdata(5,10);
    B.getdata(16,12);
    A.putdata();
    B.putdata();
    C=A.Sum(B);   // Here object A is the calling object,B is passed as argument while C receives return value
    C.putdata();
    return 0;
}


//Memeber function to increment data member.

// #include<iostream>
// using namespace std;
// class Complex{
//     int real;
//     int img;

//     public:
//        void getdata(int r,int i)
//        {
//         real=r;
//         img=i;
//        }

//        void putdata()
//        {
//         cout<<real<<endl;
//         cout<<img<<endl;
//        }

//       void Sum()
//       {
//        real++;
//        img++;           
//       }
// };


// int main()
// {
//     Complex C;
//     C.getdata(5,10);
//     C.putdata();
//     C.Sum();   
//     C.putdata();
//     return 0;
// }

