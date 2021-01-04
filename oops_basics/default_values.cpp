#include <bits/stdc++.h>
using namespace std;
class Human
{
private:
    int age;
    string name;

public:
    Human()
    {
        name = "no name";
        age = 19;
        cout << " default constructor " << endl;
    }
    Human(string iname, int iage = 0)
    {
        name = iname;
        age = iage;
        cout << " again default constructor " << endl;
    }

    void speak()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{

    Human sahil;
    sahil.speak();
    Human sachin("sachin", 24);
    sachin.speak();

    return 0;
}