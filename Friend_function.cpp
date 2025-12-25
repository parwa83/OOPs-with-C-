//Friend function is a normal function which is declared friend in class.
//Its a normal function which can access public data members and member functions.
//As its a normal function so not defined inside class, Only declared in class.
//As its a normal function so its not called by object, Instead it takes object as argument.

//Friend function to add 2 complex numbers.
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
        cout<<real<<"+i"<<img<<endl;
       }

       friend Complex Sum(Complex C1,Complex C2); 
       //Friend function can be declared friend anywhere in the class,
       //private or public,Irrespective of altering its meaning.
};
Complex Sum(Complex C1,Complex C2)
{
    Complex C3;
     C3.real=C1.real+C2.real;
     C3.img=C1.img+C2.img;   
     return C3;     
}

int main()
{
    Complex A,B,C;
    A.getdata(5,10);
    B.getdata(12,16);
    A.putdata();
    B.putdata();
    C=Sum(A,B);   
    C.putdata();
    return 0;
}


//Friend function to increment data members.

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

//        friend void Sum(Complex &C1);
// };
//  void Sum(Complex &C1)
// {
//      C1.real++;
//      C1.img++;           
// }

// int main()
// {
//     Complex C;
//     C.getdata(5,10);
//     C.putdata();
//     Sum(C);   
//     C.putdata();
//     return 0;
// }
