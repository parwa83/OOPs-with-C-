//Call by values does't swap the values,As it sends copy and not original data.
//But Call by address and refrence works on original copy. Thus swaps data.
//Swap using call by address, Uses defrencing and pointer
//Swap using call by reference, No derefrencing or pointer, Easy to use
#include<iostream>
using namespace std;
void Swap(int l,int m)
{
    int k=l;
    l=m;
    m=k;
}
void Swap_By_Address(int *x,int *y){
    int c=*x;
    *x=*y;
    *y=c;
}
void Swap_By_Pointer(int &x,int &y){
    int c=x;
    x=y;
    y=c;
}
int main()
{
    int a,b,c,d;
    a=10;
    b=20;
    c=30;
    d=40;
    cout<<a<<" "<<b<<"\n";
    Swap(a,b);
    cout<<a<<" "<<b<<"\n";
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    Swap_By_Address(&a,&b);
    Swap_By_Pointer(c,d);
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
}