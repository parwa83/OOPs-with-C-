// Concept of Reusability of already written(tested & debbuged) code, Extended classes.
// Base class or super class gets inherited by derived class or sub class.
// Private data members are never inherited.
// Once we create object of derived class generally there after no object of base class is created.
// Derived class object allocates memory to base class objects as well.
// Protected is the version of private which is inheritable.
// Visibility mode Private, All inheritable things(Public & Protected) goes to private section of derived class.
// Visibility mode Public, All inheritable things(Public & Protected) goes to there respective section of derived class, 
// Public to public and derived to derived.
// Visibility mode Protected, All inheritable things(Public & Protected) goes to protected section of derived class.

#include<iostream>
using namespace std;
class Base{
    private:
      int x,y;

    public:
      void getdata1()
      {
        cout<<"Enter the values of x and y\n";
        cin>>x>>y;
      }

      void putdata1()
      {
        cout<<"The values of x and y"<<x<<" "<<y<<endl;
      }

};

class Derived: public Base{   //Public here is the visibility mode for derived class.
    private:
      int z;
    public:
      void getdata2()
      {
        cout<<"Enter the value of z\n";
        cin>>z;
      }

      void putdata2()
      {
        cout<<"The value of z"<<z<<endl;
      }
};
int main()
{
    Derived D;    // After inheritence object created for only derived class, 
    D.getdata1();              // It allocates the memory to base class as well.
    D.putdata1();
    D.getdata2();
    D.putdata2();
    return 0;
}


//Same thing done using private visibilty mode:

// #include<iostream>
// using namespace std;
// class Base{
//     private:
//       int x,y;

//     public:
//       void getdata1()
//       {
//         cout<<"Enter the values of x and y\n";
//         cin>>x>>y;
//       }

//       void putdata1()
//       {
//         cout<<"The values of x and y"<<x<<" "<<y<<endl;
//       }

// };

// class Derived: private Base{   //Private here is the visibility mode for derived class.
//     private:
//       int z;
//     public:
//       void getdata2()
//       {
//         getdata1();  // We're calling getdata1() from here because its private, And obj. can't access private member function direclty.
//         cout<<"Enter the value of z\n";    //Obj. will call public member function i.e is getdata2(),And it'll then call private member function i.e. is getdata1().
//         cin>>z;
//       }

//       void putdata2()
//       {
//         putdata1();   // We're calling putdata1() from here because its private, And obj. can't access private member function direclty.
//         cout<<"The value of z"<<z<<endl;   //Obj. will call public member function i.e is putdata2(),And it'll then call private member function i.e. is putdata1().
//         cin>>z;
//       }
// };
// int main()
// {
//     Derived D;    // After inheritence object created for only derived class, 
//                  // It allocates the memory to base class as well.
    
//     D.getdata2();
//     D.putdata2();
//     return 0;
// }