// When we inherited privately then everything which is inheritable(public and protected) goes into private section of derived class.
// When inherited protected then everything which is inheritable(public and protected) goes into protected section of derived class.
// And when inherited publicaly then everything which is inheritable(public and protected) goes into their respective section of derived class.

// Protected is the inheritable version of private.

//Private data members are accessed only by their own class’s member functions, 
// whereas protected data members are accessed by their own class’s and derived classes’ 
// member functions, but never directly by objects.Obj. can directly access only public data members and member functions.
// Even though when they are inherited, If inherited privately/protectdly by derived class, 
// Then obj. will call first derived class public member function which will 
// further call base class member function and then it will access private/protected data member.
// If inherited publically by derived class, then obj. can directly call base class public member function.


//Public Inheritence

// #include <iostream>
// using namespace std;

// class Base {
// private:
//     int x = 10;        
// protected:
//     int y = 20;        
// public:
//     void show() {     
//         cout << "x = " << x << ", y = " << y << endl;
//     }
// };

// class ChildPublic : public Base {
// public:
//     void test() {
//         cout << y << endl;   // protected is accessible by own as well as derived class member functions.
//     }
// };

// int main() {
//     ChildPublic obj;
//     obj.show();   // object can call base public function,As now show() is in derived class public section.
//     obj.test();
// }


//Protected Inheritence

// #include <iostream>
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


//Private Inheritence

#include <iostream>
using namespace std;

class Base {
private:
    int x = 10;        // private data
protected:
    int y = 20;        // protected data
public:
    void show() {      // public function
        cout << "x = " << x << ", y = " << y << endl;
    }
};

class ChildProtected : private Base {
public:
    void test() {
        cout << y << endl; 
        show();              
    }
};

int main() {
    ChildProtected obj;
    // obj.show();  NOT allowed (became private) Object directly can never access 
    // private/protected member function or data member.
    obj.test();   // object → child class member function(test) → base class member function(show)
}


//As y was protected it was inherited further and was accessed by derived class member function.
//x was never inherited and only accessed by its own member function.
//Though object was never aware about y anytime as that was protected.
//That's the beauty of protected.
//Protected members are inherited and accessible to derived classes,
// but remain completely hidden from objects.