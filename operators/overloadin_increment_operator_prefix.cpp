#include <bits/stdc++.h>
using namespace std;

class Marks
{
    int marks;

public:
    Marks()
    {
        int marks = 0;
    }
    Marks(int num)
    {
        int marks = num;
    }
    void marks_obtained()
    {
        cout << " your obtained marks are " << marks << endl;
    }
    void operator++()
    {
        marks += 1;
    }
    friend void operator--(Marks &marks_obtained);
};
void operator--(Marks &marks_obtained)
{
    marks_obtained.marks -= 1;
}
int main()
{
    Marks sahil(100);
    sahil.marks_obtained();

    ++sahil;
    sahil.marks_obtained();
    --sahil;
    sahil.marks_obtained();

    return 0;
}