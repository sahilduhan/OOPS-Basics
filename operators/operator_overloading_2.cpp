#include <bits/stdc++.h>
using namespace std;
class Marks
{

    int maximum_marks;
    int minimum_marks;

public:
    Marks()
    {
        maximum_marks = 0;
        minimum_marks = 0;
    }
    Marks(int min, int max)
    {
        minimum_marks = min;
        maximum_marks = max;
    }
    void display()
    {
        cout << maximum_marks << endl
             << minimum_marks << endl;
    }
    Marks operator+(Marks m)
    {
        Marks temp;
        temp.maximum_marks = temp.maximum_marks + m.maximum_marks;
        temp.maximum_marks = temp.minimum_marks + m.minimum_marks;
        return temp;
    }
    Marks operator-(Marks m);
};
Marks Marks::operator-(Marks m)
{
    Marks temp;
    temp.maximum_marks = temp.maximum_marks - m.maximum_marks;
    temp.maximum_marks = temp.minimum_marks - m.minimum_marks;
    return temp;
}
int main()
{
    Marks m1(10, 20), m2(100, 123);
    Marks m3 = m1 + m2;
    Marks m4 = m1 - m2;
    m3.display();
    m4.display();
    return 0;
}