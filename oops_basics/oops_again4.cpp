#include <bits/stdc++.h>
using namespace std;
class Human
{
public:
    string name;
    double balance;
    void set_balance(double bal)
    {
        balance = bal;
    }
    void display(double bal)
    {
        bal = balance;
        cout << balance << " amount is availble in your bank" << endl;
    }
    void set_name(string iname)
    {
        name = iname;
    }
    void print_name()
    {
        cout << name << " is changed " << endl;
    }
};

int main()
{
    Human sahil;
    sahil.set_balance(100);
    sahil.display(100);
    sahil.set_name(" sahil duhan ");
    sahil.print_name();
    return 0;
}