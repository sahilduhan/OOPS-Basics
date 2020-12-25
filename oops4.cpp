#include <bits/stdc++.h>
using namespace std;
class Player
{
private:
    string name{"xxxxx"};
    int health;
    int xp;

public:
    Player(std::string name = "sahil", int health = 100, int xp = 50);
};
Player(std::string name_val, int health_val, int xp_val) : name(name_val), health(health_val), xp(xp_val)
{
    cout << "three args constructor" << endl;
}

int main()
{

    Player frank{"frank"};
    Player villan{"villan"};
    return 0;
}
