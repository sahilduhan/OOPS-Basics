#include <bits/stdc++.h>
using namespace std;
class Human
{
private:
    int balance;
    int xp;
    string name = "player";

public:
    void talk(string text_to_say)
    {
        cout << name << " says hello brother " << endl;
    }
};
int main()
{
    Human player;
    player.talk("player");

    return 0;
}
