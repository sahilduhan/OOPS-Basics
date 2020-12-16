#include <bits/stdc++.h>
using namespace std;

class player
{
public:
    string name;
    int health;
    int xp;

    bool is_dead{};
};

class Account
{
public:
    string name;
    double balance;
};

int main()
{
    player frank;
    frank.name = "farnk";
    frank.health = 100;
    frank.xp = 99;
    cout << frank.health << " " << frank.name << " " << frank.xp << endl;
    return 0;
}