#include <bits/stdc++.h>
using namespace std;
class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void display()
    {
        cout << this->numerator << " " << this->denominator << endl;
    }
    void add(Fraction f2)
    {
        int lcm = denominator * f2.denominator;
        int x = lcm / f2.denominator;
        int y = lcm / denominator;
    }
};
int main()
{
    return 0;
}