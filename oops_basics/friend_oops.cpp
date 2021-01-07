#include <bits/stdc++.h>
using namespace std;
class Human
{
private:
    int age;
    string name;

public:
    Human(string iname, int iage)
    {
        name = iname;
        age = iage;
    }
    void tellme()
    {
        cout << "the name is " << name << " " << age << endl;
    }
    friend void display(Human man);
};
void display(Human man)
{
    cout << "the name is " << man.name << " " << man.age << endl;
}

int main()
{
    Human sahil("sahil", 19);
    display(sahil);

    return 0;
}