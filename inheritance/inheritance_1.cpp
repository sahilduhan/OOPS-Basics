#include <bits/stdc++.h>
using namespace std;
class Accounts
{
public:
    void deposit(double d_amount)
    {
        cout << " the balance is deposited by " << d_amount << endl;
    }
    void withdraw(double w_amount)
    {
        cout << " the amount withdrawn is " << w_amount << endl;
    }
};
class savings_account : public Accounts
{
public:
    void intrest_rate(double int_anount)
    {
        cout << " the intrest in the savings account is " << int_anount << endl;
    }
    void deposit_balance(double dep_amount)
    {
        cout << " the savings account is deposited by " << dep_amount << endl;
    }
    void withdraw_amount(double with_amount)
    {
        cout << " the saving account is withdrawn by " << with_amount << endl;
    }
};

int main()
{
    Accounts acc;
    acc.deposit(1000);
    acc.withdraw(100);
    acc.~Accounts();
    savings_account sav_acc;
    sav_acc.deposit_balance(1000);
    sav_acc.withdraw_amount(100);
    sav_acc.intrest_rate(122.3);

    return 0;
}