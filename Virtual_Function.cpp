//Virtual Function:Its a runtime polymorphism.
//We use it with base class overrided function.
//Then calling(binding) of overrided function using base obj. pointer
// will be decided at runtime,Because obj. created at runtime so does their address, 
// Thereafter calling to which function will be decided at runtime.
#include<iostream>
using namespace std;
class Base{
    int x,y;
     
    public:
    virtual void getdata()  //Virtual keyword ensures that pointer obj. 
                            // behaves according to the type of address passed to it
    {
        cout<<"Enter the values of x and y"<<endl;
        cin>>x>>y;
        cout<<"Base getdata"<<endl;
    }
    virtual void putdata()
    {
        cout<<"The values of x and y are"<<x<<" "<<y<<endl;
        cout<<"Base putdata"<<endl;
    }
};
class Derived:public Base{
    int p,q;

    public:
    void getdata()
    {
       cout<<"Enter values of p and q\n";
       cin>>p>>q;
       cout<<"Derived class getdata"<<endl;
    }
    void putdata()
    {
        cout<<"The values of p and q are"<<p<<" "<<q<<endl;
        cout<<"Derived putdata"<<endl;
    }
};
int main()
{
    Base B;
    Base *BP;
    Derived D;
    BP=&B;
    BP->getdata();   //Pointer obj access data members/member functions from arrow operator (->).
    BP->putdata();
    BP=&D;
    BP->getdata();   //Calls Derived class getdata()
    BP->putdata();   //Calls Derived class putdata()
    return 0;
}
//Now its fine, Pointer obj. is behving according to the type of address passed to it.
//Even though its base class obj. pointer(*BP), But when passed base obj add.(&B) it called base member functions.
//And when passed derived obj add.(&D) it called derived member functions.
//All thanks to Virtual Function.

//Just a quick read:
// A pure virtual function is a virtual function declared with = 0 in a base class that
// makes the class abstract and defines an interface. It enforces a contract so 
// that derived classes provide their own implementation, thereby enabling and simplifying
//  runtime polymorphism.