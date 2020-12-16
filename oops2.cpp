#include <bits/stdc++.h>
using namespace std;

class Player
{
private:
    string name{"player"};
    int xp;
    int health;

public:
    void talk(string talk_to_say) { cout << name << " says " << talk_to_say << endl; }
};

int main()
{

    Player frank;
    frank.talk(" hey there");

    return 0;
}