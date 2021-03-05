#include <bits/stdc++.h>
using namespace std;
class Base
{
    int value;

public:
    Base() : value{0}
    {
        cout << " no args constructor" << endl;
    }
    Base(int x) : value{x}
    {
        cout << " constructor with single args " << endl;
    }
};
class Derived : public Base
{
private:
    int double_value;

public:
    Derived() : Base{}, double_value{0}
    {
        cout << " derived no args constructor is called" << endl;
    }
    Derived(int x) : Base{x}, double_value{x * 2}
    {
        cout << " derived with int as a contructor" << endl;
    }
    ~Derived()
    {
        cout << " the derived destructor is called" << endl;
    }
};
int main()
{
    Derived d;
    d.~Derived();

    return 0;
}