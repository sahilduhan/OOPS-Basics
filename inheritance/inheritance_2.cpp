#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    int a{0};
    void display_nums()
    {
        cout << " the nums are " << a << " " << b << " " << c << endl;
    }

protected:
    int b{0};

private:
    int c{0};
};

class Derives : public Base
{
public:
    void acces_num_value()
    {
        a = 10000;
        b = 100000;
        // c = 1000; compiler error
    }
};
int main()
{
    cout << " the member from the basic class is " << endl;
    Base base;
    base.a = 100;
    base.display_nums();
    cout << " the members from the derived class is " << endl;
    Derives derived;
    derived.a=100;
    

    return 0;
}