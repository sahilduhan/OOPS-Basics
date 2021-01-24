#include <bits/stdc++.h>
using namespace std;

class Human
{
private:
    string name;
    int age;
    int xp;

public:
    void set_name(string name_val)
    {
        name = name_val;
        cout << name_val << " is the new name" << endl;
    }
    Human()
    {
        cout << "no arg is called" << endl;
    }
    Human(string name)
    {
        cout << "name arg is called" << endl;
    }
    Human(string name, int xp)

    {
        cout << "the name and xp is called" << endl;
    }
    ~Human()
    {
        cout << "destructor is callled" << endl;
    }
};

int main()
{
    {
        Human sahil_duhan;
        sahil_duhan.set_name("sahil_duhan");
    }

    {
        Human frank;
        frank.~Human();
    }
    Human fakir("fakir", 12);
    return 0;
}