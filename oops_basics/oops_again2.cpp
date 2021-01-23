#include<bits/stdc++.h>
using namespace std;

class Player
{
public:
string name;
int balance;
int xp;
void display(string name)
{
    cout<<"the name is "<<name;
}


};
class Account
{
public:
int balance;
int withdrawl;
void display (int balance)
{
    cout<<"the availble balance is :"<<balance;
}

};


int main()
{
Player sahil;
sahil.name="sahil";
sahil.balance=1000;
sahil.xp=10;
    return 0;
}