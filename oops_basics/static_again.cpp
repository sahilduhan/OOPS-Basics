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
    void display_active()
    {
        cout << human_count << " is the number of active humans " << endl;
    }
};
int Human::human_count = 0;

int main()
{
    Human anil;

    anil.display_active();

    return 0;
}