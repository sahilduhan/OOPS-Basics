#include <bits/stdc++.h>
using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};
//delegating a constructor
Player::Player() // this no args costructor is an delegating constructor for the next constructor
    : Player(0)  // here the delegating occurs, we will call the three args contructor from the very first constructor without no args
{
    cout << "no args condtructor is called" << endl;
}
Player::Player(string name_val)
    : Player(name_val, 0, 0)
{
    cout << "one arg constructor" << endl;
}

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "three args condtructor is called" << endl;
}

int main()
{
    //new way of writing
    Player empty;
    Player sachin("sachin");
    Player sahil("sahil", 100, 10); //the construcotr having three args will be called

    return 0;
}