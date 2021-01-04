#include <bits/stdc++.h>
using namespace std;

class Human
{

public:
    Human()
    {
        cout << "default construtor is called " << endl;
    }
    ~Human()
    {
        cout << "destructor is called " << endl;
    }
};

int main()
{
    Human *anil; // a pointer is always required for a destructor
    anil = new Human();
    delete anil; // it will delete the allocated memory in the system

    return 0;
}