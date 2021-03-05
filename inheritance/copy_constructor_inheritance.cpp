#include <bits/stdc++.h>
using namespace std;
class Base
{
private:
    int value;

public:
    Base()
        : value{0}
    {
        cout << " an constructor with no args" << endl;
    }
    Base(int x)
        : value{x}
    {
        cout << " int base constructor" << endl;
    }
    Base(const Base &other)
        : value(other.value)
    {
        cout << " base copy constructor" << endl;
    }
    Base &operator=(const Base &rhs)
    {
        cout << " base operator =" << endl;
        if (this == &rhs)
            return *this;
        value = rhs.value;
        return *this;
    }
    ~Base()
    {
        cout << " destructor is called" << endl;
    }
};
class Derived : public Base
{
private:
    int double_value;

public:
    Derived() : Base{}
    {
        cout << " derived no args constructor" << endl;
    }
    Derived(int x) : Base(x), double_value(x * 2)
    {
        cout << " int derived construcctor" << endl;
    }
    Derived(const Derived &other)
        : Base(other), double_value{other.double_value}
    {
        cout << " the derived copy constructor" << endl;
    }
};
int main()
{
    Base b(100);
    b.operator=(1000);

    b.~Base();
    Derived d;
    d.operator=(100);

    return 0;
}