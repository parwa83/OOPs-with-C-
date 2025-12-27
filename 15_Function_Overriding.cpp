#include<iostream>
using namespace std;
class Base{
    int a;

    public:
    int b;
    void getdata()
    {
        a=0;
        b=0;
        cout<<"Base getdata"<<endl;
    }
    void putdata()
    {
        cout<<a<<" "<<b<<endl;
        cout<<"Base putdata"<<endl;
    }
};

class Derived:public Base{
    int c;

    public:
    int d;
    void getdata()
    {
        cout<<"Enter the values of c and d"<<endl;
        cin>>c>>d;
        cout<<"Derived class getdata"<<endl;
    }

    void putdata()
    {
        cout<<c<<" "<<d<<endl;
        cout<<"Derived putdata"<<endl;
    }
};
// int main()
// {
//    Base B;
//    Derived D;
//    Base *BP;
//    Derived *DP;
//    BP=&B;
//    DP=&D;
//    BP->b=10;            //Obj directly acceasing public data member,But later on In getdata b overrided from 10 to 0
//    DP->d=0;            //Obj directly acceasing public data member,But later on d overrided from 0 to 18
//    BP->getdata();      //Function Overloading: Same name different signature.  
//    DP->getdata(10,18);  //Function Overloading: Same name different signature. 
//    BP->putdata();     //Function Overriding: Same name,Same signature
//    DP->putdata();      //Function Overriding: Same name,Same signature
//    return 0;
// }


   //Above call was expected that BP will call base putdata(), And DP will call Derived putdata()
   //But as we know that Base Pointer obj. can hold derived obj. address as well, Then whom will it call?
   //Let's try that.
   //Everything is same we're just using new main function.

int main()
{
    Base B;
    Base *BP;
    Derived D;
    BP=&B;
    BP->getdata();   //Pointer obj access data members/member functions from arrow operator (->).
    BP->putdata();
    BP=&D;
    BP->getdata();       //Expected to call Derived class getdata()
    BP->putdata();       //Expected to call Derived class putdata()
}
    //But it calls base class putdata and getdata, Calling of overrided function is decided by type of obj pointer,
    //And not by type of address passed to it.Even though passing derived obj address,
    //Its base class obj. pointer(*BP), Even though we passed address of derived class obj.(&D).
    //It call base class getdata(),putdata().

//Functions having same name,same signature in both derived and base classes,(Function overriding)
// Then obj. pointer behaved according to the type of obj. pointer it is and not
//according to the type of address passed to it,Normally what happens is:
//int a=10
//int b=20 
//int *c;
//c=&a --> *c=10
//c=&b --> *c=20
//Above pointer c is behaving acc. to the type of address passed to it.
//But obj. pointer behaved different,Which is unexpected!
//Solution Virtual Function.