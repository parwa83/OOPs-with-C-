#include <iostream>
#include <string>
using namespace std;

class student
{
    int roll_no;
    string name;
    float m1, m2;

public:
    void getdata()
    {
        cout << "\nEnter roll_no: ";
        cin >> roll_no;

        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter marks out of 50 per subject: ";
        cin >> m1 >> m2;
    }

    void putdata()
    {
        float avg = (m1 + m2) / 2;
        float per = m1 + m2;

        cout << "\nRoll: " << roll_no
             << " Name: " << name
             << " Avg: " << avg
             << " percentage: " << per << endl;
    }
};

int main()
{
    int n;
    cout << "Enter no. of students: ";
    cin >> n;

    student S[n];

    for(int i = 0; i < n; i++)
        S[i].getdata();

    for(int i = 0; i < n; i++)
        S[i].putdata();

    return 0;
}

