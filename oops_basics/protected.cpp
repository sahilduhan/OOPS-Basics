#include <bits/stdc++.h>
using namespace std;
class Human
{
protected:
    string name;

public:
    void set_name(string iname)
    {
        name = iname;
    }
};
class student : public Human
{
public:
    void display()
    {
        cout << "the enterd name is " << name << endl;
    }
};

int main()
{
    Human sahil;
    sahil.set_name("nigga");
    return 0;
}