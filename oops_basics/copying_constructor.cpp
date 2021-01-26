#include <bits/stdc++.h>
using namespace std;
class Human
{
private:
    string name;
    int health;
    int xp;

public:
    string get_name() { return name; }
    int get_health() { return health; }
    int get_xp() { return xp; }
    Human(string name_val = "none", int health_val = 0, int xp_val = 0);
    //the copy constructor is called
    Human(const Human &source);
    ~Human()
    {
        cout << " destructor is called for   " << name << endl;
    }
};
Human::Human(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "three args constructor is called " << endl;
}
//printing the copy of the constructor
Human::Human(const Human &source)
    : name(source.name), health(source.health), xp(source.xp)
{
    cout << " an copy is called for " << source.name << endl;
}
void display_player(Human p)
{
    cout << " name is " << p.get_name() << endl;
    cout << " health is " << p.get_health() << endl;
    cout << " xp is " << p.get_xp() << endl;
}

int main()
{
    Human empty("xxxxx", 100, 12);
    Human new_object(empty);
    return 0;
}