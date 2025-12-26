#include <iostream>
// using namespace std;

// class Base {
// private:
//     int x = 10;        // private data
// protected:
//     int y = 20;        // protected data
// public:
//     void show() {      // public function
//         cout << "x = " << x << ", y = " << y << endl;
//     }
// };

// class ChildProtected : protected Base {
// public:
//     void test() {
//         cout << y << endl; 
//         show();              
//     }
// };

// int main() {
//     ChildProtected obj;
//     // obj.show();  NOT allowed (became protected) Object directly can never access 
//     // protected/private member function or data member.
//     obj.test();   // object → child class member function(test) → base class member function(show)
// }