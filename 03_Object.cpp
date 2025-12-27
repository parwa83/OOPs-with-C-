//Object is aclass variable
//It can only access only public data members or member functions 
//using dot opeartor and never private ones.V1 was object in previous code.

//Program to demonstrate basic object use
#include<iostream>
using namespace std;
class Object{
    private:
      string name;
      int roll_no;

    public:
    void getdata()
    {
        cout<<"Enter name";
        cin>>name;

        cout<<"Enter roll_no.";
        cin>>roll_no; 
    }

    void putdata()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Roll_no. is "<<roll_no<<endl;
    }
};

int main()
{
    Object A;
    A.getdata();
    A.putdata();
    return 0;
}





