#include <bits/stdc++.h>
using namespace std;

class Human_Being
{
private:
    string name;
    int age;

public:
    Human_Being()
    {
        age = 19;
        name = "sahil duhan";
        cout << " constructor is called " << endl;
    }
    void display()
    {
        cout << age << endl
             << name << endl;
    }
};

int main()
{
    Human_Being sahil; //the constructor value is called when we
    sahil.display();
    //we initialised the value of the class human being
    return 0;
}