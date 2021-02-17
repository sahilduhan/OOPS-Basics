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
    Marks(int min_marks, int max_marks)
    {
        maximum_marks = max_marks;
        minimum_marks = min_marks;
    }
    void display()
    {
        cout << minimum_marks << endl
             << maximum_marks << endl;
    }
    Marks operator+(Marks m)
    {
        Marks temp;
        temp.maximum_marks = temp.maximum_marks + m.maximum_marks;
        temp.maximum_marks = temp.minimum_marks + m.minimum_marks;
        return temp;
    }
};
int main()
{
    Marks m1(10, 20), m2(100, 123);
    Marks m3 = m1 + m2;
    m3.display();
    m3.display();
    return 0;
}