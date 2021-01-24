#include <bits/stdc++.h>
using namespace std;
class Human
{
private:
    string name;

public:
    int balance = 1000000;
    double get_balance();
    double set_balance(double amount);

    void watch_balance()
    {
        cout << balance << " is the amount  " << endl;
    }
    void withdraw()
    {
        if (balance > 10000)
            cout << "ok" << endl;
        else
        {
            cout << "sorry bro" << endl;
        }
    }
};

int main()
{
    Human sahil;
    sahil.balance;
    sahil.watch_balance();
    sahil.withdraw();

    return 0;
}