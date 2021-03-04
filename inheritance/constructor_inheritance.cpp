#include <bits/stdc++.h>
using namespace std;
class Base
{
private:
    int value{};

public:
    Base() : value{0}
    {
        cout << " no args constructor is called " << endl;
    }
    Base(int x) : value{x}
    {
        cout << " single args overloaded constructor is called " << endl;
    }
    ~Base()
    {
        cout << " destructor is called " << endl;
    }
};
class Derive : public Base
{
private:
    int doubled_value;

public:
    Derive() : doubled_value{}
    {
        cout << " derived constructor is called " << endl;
    }
    Derive(int x) : doubled_value{x * 2}
    {
        cout << " the single args derived constructor is called " << endl;
    }
    ~Derive()
    {
        cout << " derived destructor is called " << endl;
    }
};

int main()
{
    Base b;
    Base b(100);
    b.~Base();

    return 0;
}