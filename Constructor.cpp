//Constructor is a special member function which has same name as that of class.
//It has no return type,Not even null.
//Intializes objects as soon as its created,
//Gives Look and feel of working with built-in data types.
//Defined in public section only.
#include<iostream>
using namespace std;
class Kuns{
    int real;
    int img;
    
    public:
      Kuns(int r,int i)
      {
        real=r;
        img=i;
      }
      void putdata()
      {
        cout<<real<<" "<<img;
      }
};
int main()
{
    int r,i;
    cin>>r>>i;
    Kuns A(r,i);  //Declaration + initialization
    A.putdata();
    return 0;
}