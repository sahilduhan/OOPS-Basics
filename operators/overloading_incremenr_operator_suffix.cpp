#include <bits/stdc++.h>
using namespace std;
class Marks
{
    int marks;

public:
    Marks()
    {
        marks = 0;
    }
    Marks(int num)
    {
        marks = num;
    }
    void display_marks()
    {
        cout << " the obtained marks are " << marks << endl;
    }

    Marks operator++(int)
    {
        Marks duplicate(*this);
        marks += 1;
        return duplicate;
    }
    friend Marks operator--(Marks &, int);
};

Marks operator--(Marks &num, int)
{
    Marks duplicate(num);
    num.marks -= 1;
    return duplicate;
}

int main()
{
    Marks sahil(99);
    sahil.display_marks();
    (sahil++).display_marks();
    sahil.display_marks();
    return 0;
}