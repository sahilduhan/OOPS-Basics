#include <bits/stdc++.h>
using namespace std;
class Human
{
private:
    string name;
    int age;
    int xp;

public:
    Human();
    Human(string name_val, int xp_val);
    Human(string name_val, int xp_val, int age_val);
};
//a better way of writing a constructor

Human::Human()
    : name("none"), age{10}, xp{50}
{
    //empty body \-can be used when varaible are introduced
}

Human::Human()
{
    name = "none";
    age = 100;
    xp = 12;
}

//a better way to write an constructor

Human::Human(string name_val, int age_val, int xp_val)
    : name(name_val), age(age_val), xp(xp_val)
{
}
int main()
{
    Human frank;
    Human sahil("sahil", 12);
    Human wazir("wazir", 12, 3);
    return 0;
}