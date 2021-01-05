#include <bits/stdc++.h>
using namespace std;

class Human
{
private:
public:
    static int human_count;
    Human()
    {
        human_count++;
    }
    void human_total()
    {
        cout << " there are " << human_count << " present " << endl;
    }
};
int Human::human_count = 0;

int main()
{
    cout << "initial value is " << Human::human_count << endl;
    Human anil;
    anil.human_total();
    Human sahil;
    sahil.human_total();
    return 0;
}