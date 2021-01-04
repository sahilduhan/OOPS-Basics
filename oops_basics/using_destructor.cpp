#include <bits/stdc++.h>
using namespace std;
class Human
{

private:
    int *age;
    string *name;

public:
    Human(string iname, int iage)
    {
        age = new int;
        name = new string;
        *name = iname;
        *age = iage;
    }

    void display()
    {
        cout << "hi my name is " << *name << " and i am " << *age << " old" << endl;
    }
    ~Human()
    {
        delete name;
        delete age;
        cout << "all the memory is free" << endl;
    }
};

int main()
{
    Human *sahil = new Human("sahil", 19);
    sahil->display();
    delete sahil;
    return 0;
}
