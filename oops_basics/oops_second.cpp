#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    string name;
    void introduce()
    {
        cout << " hello " << name << endl;
    }
};

int main()
{
    Human *bunty = new Human; // in this method the data will be stored
                              // in the heap memory which is dynamical and easy to acess
    bunty->name = "bunty";
    bunty->introduce();

    return 0;
}