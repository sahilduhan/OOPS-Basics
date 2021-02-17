#include <bits/stdc++.h>
using namespace std;
class Marks
{
    int maximum_marks;
    int minimun_marks;

public:
    Marks()
    {
        maximum_marks = 0;
    }
    Marks(int max)
    {
        maximum_marks = max;
    }
    void display()
    {
        cout << " your marks is " << maximum_marks << endl;
    }
    void operator+=(int bonus)
    {
        maximum_marks = maximum_marks + bonus;
    }
    friend void operator-=(Marks &curObj, int redmark);
};
 void operator-=(Marks &curObj, int redmark)
 {
     curObj.maximum_marks -= redmark;
 }

int main()
{
Marks sahil(100);
sahil.display();
sahil.operator+=(10);
sahil.display();


    return 0;
}