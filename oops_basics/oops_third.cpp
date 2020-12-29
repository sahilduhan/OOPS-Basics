#include <bits/stdc++.h>
using namespace std;

class Human_Being
{
private:
    int age;

public:
    void Display_age()
    {
        cout << age << endl;
    }
    void Set_age(int value)
    {
        age = value;
    }
};

int main()
{
    Human_Being Sahil;
    Sahil.Set_age(19);
    Sahil.Display_age();

    return 0;
}