#include <bits/stdc++.h>
using namespace std;
class Human
{
private:
    string name;
    int age;
    int xp;

public:
    Human(string name_value = "none", int health_value = 0, int xp_value = 0); //we will make a single consructor having some default values
    //having some default value such that we donot need to make seprate constructors for every kind of input
    //this will make the code light and easy to de-bugs
};
Human::Human(string name_val, int age_val, int xp_val)
    : name{name_val}, age{age_val}, xp{xp_val}
{
    cout << " three args constructor is called " << endl;
}

int main()
{

    Human sahil("sahil");
    return 0;
}
