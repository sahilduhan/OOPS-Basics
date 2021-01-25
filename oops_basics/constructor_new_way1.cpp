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

Human::Human()
{
    name = "none";
    age = 100;
    xp = 12;
}

//a better way to write an constructor

Human::Human(string name_val, int age_val, int xp_val)
{
    age = age_val;
    name = name_val;
    xp = xp_val;
}
int main()
{
    Human frank;
    Human sahil("sahil", 12);
    Human wazir("wazir", 12, 3);
    return 0;
}