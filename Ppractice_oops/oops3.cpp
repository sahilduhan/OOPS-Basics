#include <bits/stdc++.h>
using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    string set_name(string name_val)
    {
        name = name_val;
    }
    string get_name()
    {
        return name;
    }
};
int main()
{
    Player frank;
    frank.set_name("frank");
    cout << "name is-" << frank.get_name() << endl;

    return 0;
}
