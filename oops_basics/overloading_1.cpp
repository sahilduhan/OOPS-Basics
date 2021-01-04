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
        cout << " hello brother " << endl;
        age = 0;
        name = "sahil";
    }
    Human(string iname)
    {
        cout << " hello again brother " << endl;
        age = 19;
        name = "iname";
    }
    Human(string iname, int iage)
    {
        cout << "hello for the third time " << endl;
        age = iage;
        name = "no nmae";
    }
    void display()
    {

        cout << " hello " << name << age << endl;
    }
};

int main()
{
    Human anil;
    anil.display();
    Human andy("andy");
    andy.display();

    Human sahil("sahil,19");
    sahil.display();
    return 0;
}